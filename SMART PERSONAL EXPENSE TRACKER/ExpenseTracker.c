#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#ifdef _WIN32
#define strcasecmp _stricmp
#endif

struct Expense {
    char category[30];
    char note[60];
    float amount;
    char date[12]; // format: YYYY-MM-DD (better for Excel)
};

// Function declarations
void addExpense();
void viewExpenses();
void searchByCategory();
void monthlyReport();
void deleteByDate();
void topSpendingCategory();
void summaryByCategory();
void sortByAmount();
void saveToCSV(struct Expense e);

char *getCurrentDate();
int parseExpenseLine(char *line, struct Expense *e);

// NEW: login + open in Excel
int login();
void openCSVInExcel();

const char *CSV_FILE = "expenses.csv";

int main() {
    int choice;

    // --- LOGIN FIRST ---
    if (!login()) {
        // login failed, exit program
        return 0;
    }

    while (1) {
        printf("\n===== SMART PERSONAL EXPENSE TRACKER 3.0 =====\n");
        printf("1. Add Expense\n");
        printf("2. View All Expenses\n");
        printf("3. Search by Category\n");
        printf("4. Monthly Report (Total & Average)\n");
        printf("5. Delete Expense by Date\n");
        printf("6. Top Spending Category\n");
        printf("7. Summary by Category\n");
        printf("8. Sort Expenses by Amount\n");
        printf("9. Exit\n");
        printf("----------------------------------------------\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            // invalid input, clear buffer
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {}
            printf("Invalid input! Please enter a number.\n");
            continue;
        }

        switch (choice) {
            case 1: 
                addExpense(); 
                break;
            case 2: 
                viewExpenses();      // existing feature
                openCSVInExcel();    // NEW: also open CSV in Excel / default app
                break;
            case 3: 
                searchByCategory(); 
                break;
            case 4: 
                monthlyReport(); 
                break;
            case 5: 
                deleteByDate(); 
                break;
            case 6: 
                topSpendingCategory(); 
                break;
            case 7: 
                summaryByCategory(); 
                break;
            case 8: 
                sortByAmount(); 
                break;
            case 9:
                printf("Exiting... Have a great day managing your finances!\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

// Utility: Get current system date in YYYY-MM-DD (Excel-friendly)
char* getCurrentDate() {
    static char dateStr[12];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(dateStr, "%04d-%02d-%02d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
    return dateStr;
}

// Save expense to CSV (Excel compatible)
void saveToCSV(struct Expense e) {
    FILE *fp = fopen(CSV_FILE, "a");
    if (!fp) {
        printf("Error saving to file!\n");
        return;
    }

    // category,note,amount,date
    // ="%s" makes Excel treat the date as text (and avoids #### issues)
    fprintf(fp, "%s,%s,%.2f,=\"%s\"\n", e.category, e.note, e.amount, e.date);

    fclose(fp);
}

// Parse one CSV line into an Expense. Returns 1 on success, 0 on failure.
int parseExpenseLine(char *line, struct Expense *e) {
    char *token;

    // Remove trailing newlines
    line[strcspn(line, "\r\n")] = '\0';

    token = strtok(line, ",");
    if (!token) return 0;
    strncpy(e->category, token, sizeof(e->category) - 1);
    e->category[sizeof(e->category) - 1] = '\0';

    token = strtok(NULL, ",");
    if (!token) return 0;
    strncpy(e->note, token, sizeof(e->note) - 1);
    e->note[sizeof(e->note) - 1] = '\0';

    token = strtok(NULL, ",");
    if (!token) return 0;
    e->amount = strtof(token, NULL);

    token = strtok(NULL, ",");
    if (!token) return 0;
    strncpy(e->date, token, sizeof(e->date) - 1);
    e->date[sizeof(e->date) - 1] = '\0';

    return 1;
}

// ===================== NEW FUNCTIONS =====================

// Simple hard-coded login
int login() {
    char username[50];
    char password[50];
    int attempts = 3;

    printf("===== LOGIN REQUIRED =====\n");

    while (attempts > 0) {
        printf("Username: ");
        if (scanf("%49s", username) != 1) {
            // clear invalid input
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {}
            continue;
        }

        printf("Password: ");
        if (scanf("%49s", password) != 1) {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {}
            continue;
        }

        if (strcmp(username, "Ritigya") == 0 && strcmp(password, "Qwerty@123") == 0) {
            printf("Login successful!\n\n");
            return 1;
        } else {
            attempts--;
            printf("Invalid username or password. Attempts left: %d\n", attempts);
        }
    }

    printf("Too many failed attempts. Exiting...\n");
    return 0;
}

// Open CSV in Excel (or default spreadsheet app)
void openCSVInExcel() {
    printf("\nOpening '%s' in your spreadsheet application...\n", CSV_FILE);

#ifdef _WIN32
    // On Windows, 'start "" "file"' opens with default associated program (usually Excel for .csv)
    system("start \"\" \"expenses.csv\"");
#elif _APPLE_
    // macOS: open with default app
    system("open \"expenses.csv\"");
#else
    // Linux / others: try xdg-open
    system("xdg-open \"expenses.csv\"");
#endif
}

// ===================== ORIGINAL FUNCTIONS =====================

// Add new expense
void addExpense() {
    struct Expense e;

    // Clear leftover newline from previous scanf
    getchar();

    printf("Enter category: ");
    fgets(e.category, sizeof(e.category), stdin);
    e.category[strcspn(e.category, "\n")] = '\0';

    printf("Enter note/description: ");
    fgets(e.note, sizeof(e.note), stdin);
    e.note[strcspn(e.note, "\n")] = '\0';

    printf("Enter amount: ");
    if (scanf("%f", &e.amount) != 1) {
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF) {}
        printf("Invalid amount! Expense not saved.\n");
        return;
    }

    strcpy(e.date, getCurrentDate()); // auto date

    saveToCSV(e);
    printf("\n Expense added successfully on %s!\n", e.date);
}

// View all expenses (from CSV)
void viewExpenses() {
    FILE *fp = fopen(CSV_FILE, "r");
    struct Expense e;
    char line[256];

    if (!fp) {
        printf("No expense records found.\n");
        return;
    }

    printf("\n%-15s %-12s %-10s %-40s\n", "Category", "Date", "Amount", "Note");
    printf("-------------------------------------------------------------------------------\n");

    while (fgets(line, sizeof(line), fp)) {
        char tmp[256];
        strcpy(tmp, line);
        if (parseExpenseLine(tmp, &e)) {
            printf("%-15s %-12s Rs.%-9.2f %-40s\n", e.category, e.date, e.amount, e.note);
        }
    }
    fclose(fp);
}

// Search expenses by category
void searchByCategory() {
    FILE *fp = fopen(CSV_FILE, "r");
    struct Expense e;
    char category[30];
    char line[256];
    int found = 0;

    if (!fp) {
        printf("No records found.\n");
        return;
    }

    getchar();
    printf("Enter category to search: ");
    fgets(category, sizeof(category), stdin);
    category[strcspn(category, "\n")] = '\0';

    printf("\n%-12s %-10s %-40s\n", "Date", "Amount", "Note");
    printf("---------------------------------------------------------------\n");

    while (fgets(line, sizeof(line), fp)) {
        char tmp[256];
        strcpy(tmp, line);
        if (parseExpenseLine(tmp, &e)) {
            if (strcasecmp(e.category, category) == 0) {
                printf("%-12s Rs.%-9.2f %-40s\n", e.date, e.amount, e.note);
                found = 1;
            }
        }
    }

    if (!found) printf("No expenses found under '%s'.\n", category);
    fclose(fp);
}

// Monthly report (total & average)
void monthlyReport() {
    FILE *fp = fopen(CSV_FILE, "r");
    struct Expense e;
    char line[256];
    float total = 0;
    int count = 0;

    if (!fp) {
        printf("No records found.\n");
        return;
    }

    while (fgets(line, sizeof(line), fp)) {
        char tmp[256];
        strcpy(tmp, line);
        if (parseExpenseLine(tmp, &e)) {
            total += e.amount;
            count++;
        }
    }
    fclose(fp);

    if (count == 0) {
        printf("\nNo expenses found.\n");
        return;
    }

    printf("\n Total Expenses: Rs.%.2f\n Average per Expense: Rs.%.2f\n", total, total / count);
}

// Delete expense(s) by date
void deleteByDate() {
    FILE *fp = fopen(CSV_FILE, "r");
    FILE *temp = fopen("temp.csv", "w");
    struct Expense e;
    char date[12];
    char line[256];
    int found = 0;

    if (!fp || !temp) {
        printf("Error opening file.\n");
        if (fp) fclose(fp);
        if (temp) fclose(temp);
        return;
    }

    getchar();
    printf("Enter date to delete (YYYY-MM-DD): ");
    fgets(date, sizeof(date), stdin);
    date[strcspn(date, "\n")] = '\0';

    while (fgets(line, sizeof(line), fp)) {
        char tmp[256];
        strcpy(tmp, line);
        if (parseExpenseLine(tmp, &e) && strcmp(e.date, date) == 0) {
            found = 1;  // skip this line (delete)
        } else {
            fputs(line, temp);
        }
    }

    fclose(fp);
    fclose(temp);

    remove(CSV_FILE);
    rename("temp.csv", CSV_FILE);

    if (found)
        printf(" Expense(s) from %s deleted successfully.\n", date);
    else
        printf("No records found for %s.\n", date);
}

// Find top spending category
void topSpendingCategory() {
    FILE *fp = fopen(CSV_FILE, "r");
    struct Expense e;
    char line[256];
    struct { char name[30]; float total; } cats[50];
    int catCount = 0, i, found;
    float max = 0;
    char topCat[30] = "";

    if (!fp) {
        printf("No records found.\n");
        return;
    }

    while (fgets(line, sizeof(line), fp)) {
        char tmp[256];
        strcpy(tmp, line);
        if (!parseExpenseLine(tmp, &e)) continue;

        found = 0;
        for (i = 0; i < catCount; i++) {
            if (strcasecmp(cats[i].name, e.category) == 0) {
                cats[i].total += e.amount;
                found = 1;
                break;
            }
        }
        if (!found && catCount < 50) {
            strncpy(cats[catCount].name, e.category, sizeof(cats[catCount].name) - 1);
            cats[catCount].name[sizeof(cats[catCount].name) - 1] = '\0';
            cats[catCount].total = e.amount;
            catCount++;
        }
    }
    fclose(fp);

    for (i = 0; i < catCount; i++) {
        if (cats[i].total > max) {
            max = cats[i].total;
            strcpy(topCat, cats[i].name);
        }
    }

    if (catCount == 0)
        printf("No data available.\n");
    else
        printf("\n Top Spending Category: %s (Rs.%.2f)\n", topCat, max);
}

// Summary by category
void summaryByCategory() {
    FILE *fp = fopen(CSV_FILE, "r");
    struct Expense e;
    char line[256];
    struct { char name[30]; float total; } cats[50];
    int catCount = 0, found, i;

    if (!fp) {
        printf("No records found.\n");
        return;
    }

    while (fgets(line, sizeof(line), fp)) {
        char tmp[256];
        strcpy(tmp, line);
        if (!parseExpenseLine(tmp, &e)) continue;

        found = 0;
        for (i = 0; i < catCount; i++) {
            if (strcasecmp(cats[i].name, e.category) == 0) {
                cats[i].total += e.amount;
                found = 1;
                break;
            }
        }
        if (!found && catCount < 50) {
            strncpy(cats[catCount].name, e.category, sizeof(cats[catCount].name) - 1);
            cats[catCount].name[sizeof(cats[catCount].name) - 1] = '\0';
            cats[catCount].total = e.amount;
            catCount++;
        }
    }

    fclose(fp);

    if (catCount == 0) {
        printf("No data available.\n");
        return;
    }

    printf("\nCategory Summary:\n---------------------------\n");
    for (i = 0; i < catCount; i++)
        printf("%-15s Rs.%.2f\n", cats[i].name, cats[i].total);
}

// Sort expenses by amount
void sortByAmount() {
    FILE *fp = fopen(CSV_FILE, "r");
    if (!fp) {
        printf("No records found.\n");
        return;
    }

    struct Expense arr[500];
    int count = 0, i, j;
    char line[256];

    while (fgets(line, sizeof(line), fp) && count < 500) {
        char tmp[256];
        strcpy(tmp, line);
        if (parseExpenseLine(tmp, &arr[count])) {
            count++;
        }
    }
    fclose(fp);

    if (count == 0) {
        printf("No records to sort.\n");
        return;
    }

    // Bubble sort by amount (high to low)
    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (arr[i].amount < arr[j].amount) {
                struct Expense temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nExpenses Sorted by Amount (High -> Low):\n");
    printf("%-15s %-12s %-10s %-40s\n", "Category", "Date", "Amount", "Note");
    printf("-------------------------------------------------------------------------------\n");
    for (i = 0; i < count; i++)
        printf("%-15s %-12s Rs.%-9.2f %-40s\n", arr[i].category, arr[i].date, arr[i].amount, arr[i].note);
}