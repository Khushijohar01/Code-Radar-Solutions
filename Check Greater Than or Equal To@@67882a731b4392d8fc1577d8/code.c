#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    
    printf("Enter the second number: ");
    scanf("%d", &b);

    // Checking the condition using the >= operator
    if (a >= b) {
        printf("The first number is greater than or equal to the second number.\n");
    } else {
        printf("The first number is less than the second number.\n");
    }

    return 0;
}


