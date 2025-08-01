// This program checks whether an entered alphabet is a vowel or consonant using a switch-case statement.

#include <stdio.h>

int main() {
    char ch;

    printf("Input an alphabet: ");
    scanf(" %c", &ch);  // Note: added space before %c to handle newline

    // Check if input is an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        switch(ch) {
            case 'a': case 'A':
            case 'e': case 'E':
            case 'i': case 'I':
            case 'o': case 'O':
            case 'u': case 'U':
                printf("It is a vowel.\n");
                break;
            default:
                printf("It is a consonant.\n");
        }
    } else {
        printf("Invalid input. Please enter an alphabet letter.\n");
    }

    return 0;
}
