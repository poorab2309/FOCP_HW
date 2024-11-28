#include <stdio.h>
#include <math.h>

// Q1: Check Armstrong Number
void checkArmstrong() {
    int num, originalNum, sum = 0, digitCount = 0;
    printf("Enter a number to check if it's an Armstrong number: ");
    scanf("%d", &num);

    originalNum = num;
    while (originalNum != 0) {
        digitCount++;
        originalNum /= 10;
    }

    originalNum = num;
    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += pow(digit, digitCount);
        originalNum /= 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
}

// Q2: Calculate HCF
void calculateHCF() {
    int a, b;
    printf("Enter two integers to calculate their HCF: ");
    scanf("%d %d", &a, &b);

    int originalA = a, originalB = b;
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    printf("The HCF of %d and %d is %d.\n", originalA, originalB, a);
}

// Q3: Subtract Two Integers Without Using Minus Operator
void subtractNumbers() {
    int a, b;
    printf("Enter two integers to subtract (a - b): ");
    scanf("%d %d", &a, &b);
    int result = a + (~b + 1); // Add 'a' to the 2's complement of 'b'
    printf("The result of %d - %d is %d.\n", a, b, result);
}

// Q4: Swap Two Numbers Using 4 Methods
void swapNumbers() {
    int a, b, temp;
    printf("Enter two integers to swap: ");
    scanf("%d %d", &a, &b);

    // Method 1: Using a Temporary Variable
    temp = a;
    a = b;
    b = temp;
    printf("After Method 1 (Using Temp Variable): a = %d, b = %d\n", a, b);

    // Reset values
    printf("Re-enter the numbers to swap again: ");
    scanf("%d %d", &a, &b);

    // Method 2: Using Addition and Subtraction
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Method 2 (Using Addition/Subtraction): a = %d, b = %d\n", a, b);

    // Reset values
    printf("Re-enter the numbers to swap again: ");
    scanf("%d %d", &a, &b);

    // Method 3: Using Multiplication and Division
    a = a * b;
    b = a / b;
    a = a / b;
    printf("After Method 3 (Using Multiplication/Division): a = %d, b = %d\n", a, b);

    // Reset values
    printf("Re-enter the numbers to swap again: ");
    scanf("%d %d", &a, &b);

    // Method 4: Using Bitwise XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After Method 4 (Using XOR): a = %d, b = %d\n", a, b);
}

// Q5: Check Perfect Number
void checkPerfectNumber() {
    int num, sum = 0;
    printf("Enter a number to check if it's a Perfect Number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);
}

// Q6: Determine Quadrant of a Point
void findQuadrant() {
    int x, y;
    printf("Enter the x and y coordinates: ");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0)
        printf("The point lies at the origin.\n");
    else if (x > 0 && y > 0)
        printf("The point (%d, %d) lies in the First Quadrant.\n", x, y);
    else if (x < 0 && y > 0)
        printf("The point (%d, %d) lies in the Second Quadrant.\n", x, y);
    else if (x < 0 && y < 0)
        printf("The point (%d, %d) lies in the Third Quadrant.\n", x, y);
    else
        printf("The point (%d, %d) lies in the Fourth Quadrant.\n", x, y);
}

// Q7: Decimal to Binary and Binary to Decimal Conversion
void decimalToBinary(int num) {
    int binary = 0, base = 1;
    while (num > 0) {
        binary += (num % 2) * base;
        num /= 2;
        base *= 10;
    }
    printf("Binary: %d\n", binary);
}

void binaryToDecimal(int num) {
    int decimal = 0, base = 1;
    while (num > 0) {
        decimal += (num % 10) * base;
        num /= 10;
        base *= 2;
    }
    printf("Decimal: %d\n", decimal);
}

void binaryDecimalConversion() {
    int choice, num;
    printf("Enter 1 for Decimal to Binary or 2 for Binary to Decimal: ");
    scanf("%d", &choice);
    printf("Enter the number: ");
    scanf("%d", &num);

    if (choice == 1)
        decimalToBinary(num);
    else if (choice == 2)
        binaryToDecimal(num);
    else
        printf("Invalid choice.\n");
}

// Q8: Print Pattern
void printPattern() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", (i + j) % 2);
        }
        printf("\n");
    }
}

// Q9: Print Pyramid Pattern
void printPyramid() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", (j % 2 == 0) ? 1 : 0);
        }
        printf("  ");
        for (int j = 1; j <= i; j++) {
            printf("%d", (j % 2 == 0) ? 1 : 0);
        }
        printf("\n");
    }
}

// Q10: Print Pascal’s Triangle
void printPascalsTriangle() {
    int rows, coef = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }
}

// Main Function
int main() {
    int choice;
    do {
        printf("\nSelect an option:\n");
        printf("1. Check Armstrong Number\n");
        printf("2. Calculate HCF\n");
        printf("3. Subtract Without Minus Operator\n");
        printf("4. Swap Numbers (4 Methods)\n");
        printf("5. Check Perfect Number\n");
        printf("6. Determine Quadrant\n");
        printf("7. Binary/Decimal Conversion\n");
        printf("8. Print Pattern\n");
        printf("9. Print Pyramid\n");
        printf("10. Print Pascal's Triangle\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: checkArmstrong(); break;
            case 2: calculateHCF(); break;
            case 3: subtractNumbers(); break;
            case 4: swapNumbers(); break;
            case 5: checkPerfectNumber(); break;
            case 6: findQuadrant(); break;
            case 7: binaryDecimalConversion(); break;
            case 8: printPattern(); break;
            case 9: printPyramid(); break;
            case 10

: printPascalsTriangle(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 0);

    return 0;
}