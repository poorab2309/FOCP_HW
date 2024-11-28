#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// Q1: Increase every student mark by 5
void increaseMarks(int marks[], int n) {
    for(int i = 0; i < n; i++) {
        marks[i] += 5;
    }
    printf("Updated marks: \n");
    for(int i = 0; i < n; i++) {
        printf("%d\n", marks[i]);
    }
}

// Q2: Print grades based on marks
void printGrades(int marks[], int n) {
    for(int i = 0; i < n; i++) {
        printf("The grade of student %d is: ", i + 1);
        if(marks[i] >= 75) printf("A\n");
        else if(marks[i] >= 60) printf("B\n");
        else if(marks[i] >= 40) printf("C\n");
        else printf("D\n");
    }
}

// Q3: Find who scored the first 99
void first99(int marks[], int n) {
    for(int i = 0; i < n; i++) {
        if(marks[i] == 99) {
            printf("The first 99 marks are secured by student %d\n", i + 1);
            return;
        }
    }
    printf("No student scored 99.\n");
}

// Q4: Find who and how many scored 99
void count99(int marks[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(marks[i] == 99) {
            printf("Student %d secured 99 marks\n", i + 1);
            count++;
        }
    }
    printf("Total number of students who scored 99: %d\n", count);
}

// Q5: Find the sum of all scores
void sumScores(int marks[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += marks[i];
    }
    printf("The sum of scores is: %d\n", sum);
}

// Q6: Find the average score
void averageScore(int marks[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += marks[i];
    }
    printf("The average score is: %.2f\n", (float)sum / n);
}

// Q7: Check even or odd
void checkEvenOdd(int marks[], int n) {
    for(int i = 0; i < n; i++) {
        if(marks[i] % 2 == 0) {
            printf("Marks scored by student %d is even\n", i + 1);
        } else {
            printf("Marks scored by student %d is odd\n", i + 1);
        }
    }
}

// Q8: Find maximum and minimum marks
void findMaxMin(int marks[], int n) {
    int max = marks[0], min = marks[0];
    for(int i = 1; i < n; i++) {
        if(marks[i] > max) max = marks[i];
        if(marks[i] < min) min = marks[i];
    }
    printf("Maximum marks: %d\nMinimum marks: %d\n", max, min);
}

// Q9: Find peak elements
void findPeakElement(int arr[], int n) {
    printf("Peak elements: \n");
    for(int i = 0; i < n; i++) {
        if((i == 0 || arr[i] >= arr[i - 1]) && (i == n - 1 || arr[i] >= arr[i + 1])) {
            printf("%d\n", arr[i]);
        }
    }
}

// Q10: Count prime numbers
int isPrime(int num) {
    if(num < 2) return 0;
    for(int i = 2; i <= sqrt(num); i++) {
        if(num % i == 0) return 0;
    }
    return 1;
}

void countPrimes(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(isPrime(arr[i])) {
            count++;
        }
    }
    printf("Total prime numbers: %d\n", count);
}

// Menu-driven program
int main() {
    int choice, n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n];

    printf("Enter the marks: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    do {
        printf("\nMenu:\n");
        printf("1. Increase marks by 5\n");
        printf("2. Print grades\n");
        printf("3. Find first 99\n");
        printf("4. Count 99\n");
        printf("5. Sum of scores\n");
        printf("6. Average score\n");
        printf("7. Check even or odd\n");
        printf("8. Find max and min\n");
        printf("9. Find peak elements\n");
        printf("10. Count prime numbers\n");
        printf("11. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                increaseMarks(marks, n);
                break;
            case 2:
                printGrades(marks, n);
                break;
            case 3:
                first99(marks, n);
                break;
            case 4:
                count99(marks, n);
                break;
            case 5:
                sumScores(marks, n);
                break;
            case 6:
                averageScore(marks, n);
                break;
            case 7:
                checkEvenOdd(marks, n);
                break;
            case 8:
                findMaxMin(marks, n);
                break;
            case 9:
                findPeakElement(marks, n);
                break;
            case 10:
                countPrimes(marks, n);
                break;
            case 11:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while(choice != 11);

    return 0;
}