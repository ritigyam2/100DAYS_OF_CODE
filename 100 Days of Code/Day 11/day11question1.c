#include <stdio.h>
int main()
{
    int m;
    if (scanf("%d", &m) != 1)
        return 0;
    const char *name = "Invalid";
    int d = 0;
    switch (m)
    {
    case 1:
        name = "January";
        d = 31;
        break;
    case 2:
        name = "February";
        d = 28;
        break;
    case 3:
        name = "March";
        d = 31;
        break;
    case 4:
        name = "April";
        d = 30;
        break;
    case 5:
        name = "May";
        d = 31;
        break;
    case 6:
        name = "June";
        d = 30;
        break;
    case 7:
        name = "July";
        d = 31;
        break;
    case 8:
        name = "August";
        d = 31;
        break;
    case 9:
        name = "September";
        d = 30;
        break;
    case 10:
        name = "October";
        d = 31;
        break;
    case 11:
        name = "November";
        d = 30;
        break;
    case 12:
        name = "December";
        d = 31;
        break;
    }
    if (d == 0)
        printf("Invalid");
    else
        printf("%s - %d", name, d);
    return 0;
}
