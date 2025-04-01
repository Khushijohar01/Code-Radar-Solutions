#include <stdio.h>

int main() {
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is an uppercase letter
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    }
    // Check if the character is a lowercase letter
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    }
    // If it's not an uppercase or lowercase letter
    else {
        printf("Not an alphabet\n");
    }

    return 0;
}