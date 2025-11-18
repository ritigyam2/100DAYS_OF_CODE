//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role
#include <stdio.h>

enum Role {
    ADMIN, // 0 - Highest privileges
    USER,  // 1 - Standard privileges
    GUEST  // 2 - Limited privileges
};

// Function to display permissions based on the role
void display_permissions(enum Role user_role) {
    printf("Role: ");
    switch (user_role) {
        case ADMIN:
            printf("ADMIN - Full read/write access and user management.\n");
            break;
        case USER:
            printf("USER - Standard read/write access to personal files.\n");
            break;
        case GUEST:
            printf("GUEST - Read-only access to public files.\n");
            break;
    }
}

int main() {
    display_permissions(ADMIN);
    display_permissions(GUEST);
    
    // Output:
    // Role: ADMIN - Full read/write access and user management.
    // Role: GUEST - Read-only access to public files.

    return 0;
}