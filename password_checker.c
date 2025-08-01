
// This program takes a password from the user and checks if it is at least 8 characters long, contains a special character (%, !, *, ^, &) and if valid, it asks for confirmation and displays a message if matched.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if password is valid
bool isValidPassword(char pass[]) {
    if (strlen(pass) < 8) {
        printf("\nPassword must be at least 8 characters long.\n");
        return false;
    }

    int hasSpecial = 0;
    for (int i = 0; i < strlen(pass); i++) {
        if (pass[i] == '%' || pass[i] == '!' || pass[i] == '*' || pass[i] == '^' || pass[i] == '&') {
            hasSpecial = 1;
            break;
        }
    }

    if (!hasSpecial) {
        printf("\nPassword must contain at least one special symbol (%%, !, *, ^, &).\n");
        return false;
    }

    return true;
}

int main() {
    char name[50];
    char password[100], confirm[100];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove trailing newline

    // Password input loop
    while (1) {
        printf("\nEnter a password: ");
        fgets(password, sizeof(password), stdin);
        password[strcspn(password, "\n")] = '\0'; // Remove newline

        if (isValidPassword(password)) {
            break; // valid password entered
        }

        printf(" Please try again.\n");
    }

    // Confirm password
    printf("\nRe-enter password to confirm: ");
    fgets(confirm, sizeof(confirm), stdin);
    confirm[strcspn(confirm, "\n")] = '\0';

    if (strcmp(password, confirm) == 0) {
        printf("\nYou know what, %s? You can be a GREAT programmer. Keep coding! 💻🔥\n", name);
    } else {
        printf("\n Passwords did not match. Access denied.\n");
    }

    return 0;
}
