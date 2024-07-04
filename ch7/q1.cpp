#include <stdio.h>
#include<conio.h>
void addition();
void subtraction();
void multiplication();
void division();
void modulus();

int main() {
    char choice;

    do {
        
        printf("\nMenu:\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulus (%%)\n");
        printf("Enter 'q' to quit.\n");
        printf("Enter your choice: ");

       
        scanf(" %c", &choice);

        
        switch (choice) {
            case '1':
                addition();
                break;
            case '2':
                subtraction();
                break;
            case '3':
                multiplication();
                break;
            case '4':
                division();
                break;
            case '5':
                modulus();
                break;
            case 'q':
            case 'Q':
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
                break;
        }
    } while (choice != 'q' && choice != 'Q');

    return 0;
}


void addition() {
    double num1, num2, result;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    result = num1 + num2;
    printf("Result: %.2lf\n", result);
}

void subtraction() {
    double num1, num2, result;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    result = num1 - num2;
    printf("Result: %.2lf\n", result);
}

void multiplication() {
    double num1, num2, result;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    result = num1 * num2;
    printf("Result: %.2lf\n", result);
}

void division() {
    double num1, num2, result;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    if (num2 != 0) {
        result = num1 / num2;
        printf("Result: %.2lf\n", result);
    } else {
        printf("Error! Division by zero is not allowed.\n");
    }
}

void modulus() {
    int num1, num2, result;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    if (num2 != 0) {
        result = num1 % num2;
        printf("Result: %d\n", result);
    } else {
        printf("Error! Modulus by zero is not allowed.\n");
    }
}

