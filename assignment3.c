#include <stdio.h>
#include <math.h>

void displayMenu() {
    printf("Press '/' for division\n");
    printf("Press '*' for multiplication\n");
    printf("Press '+' for addition\n");
    printf("Press '-' for subtraction\n");
    printf("Press 'L' for logarithm\n");
    printf("Press 'S' for square roots\n");
}

int main() {
    char choice;
    float a, b;

    displayMenu();
    printf("Enter your choice: ");
    scanf(" %c", &choice);

    if (choice == 'L' || choice == 'S') {
        printf("Provide one value: ");
        scanf("%f", &a);
    } else {
        printf("Provide two values: ");
        scanf("%f %f", &a, &b);
    }

    switch (choice) {
        case '/':
            if (b != 0) {
                printf("Division of 2 numbers is %.2f\n", a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '*':
            printf("Multiplication of 2 numbers is %.2f\n", a * b);
            break;
        case '+':
            printf("Addition of 2 numbers is %.2f\n", a + b);
            break;
        case '-':
            printf("Subtraction of 2 numbers is %.2f\n", a - b);
            break;
        case 'L':
            if (a > 0) {
                printf("Logarithm of %.2f is %.2f\n", a, log10(a));
            } else {
                printf("Error: Logarithm undefined for non-positive values.\n");
            }
            break;
        case 'S':
            if (a >= 0) {
                printf("Square root of %.2f is %.2f\n", a, sqrt(a));
            } else {
                printf("Error: Square root of negative numbers is undefined.\n");
            }
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}