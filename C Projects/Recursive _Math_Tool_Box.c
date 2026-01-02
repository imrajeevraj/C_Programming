// C Programming Project – Recursive Math Tool Box
// By Rajeev Ranjan

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, int exponent);
double factorial(int n);
double fibonacci(int n);

// Main function
int main() {
    int choice;
    double num1, num2;
    int int_num, n;

    while (1) {
        printf("\n=== Recursive Math Tool Box ===\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power (Recursive)\n");
        printf("6. Factorial (Recursive)\n");
        printf("7. Fibonacci Series (Recursive)\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", add(num1, num2));
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", subtract(num1, num2));
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", multiply(num1, num2));
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 == 0)
                    printf("Error: Division by zero!\n");
                else
                    printf("Result: %.2lf\n", divide(num1, num2));
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %d", &num1, &int_num);
                printf("Result: %.2lf\n", power(num1, int_num));
                break;

            case 6:
                printf("Enter a non-negative integer: ");
                scanf("%d", &int_num);
                if (int_num < 0)
                    printf("Error: Invalid input!\n");
                else
                    printf("Result: %.0lf\n", factorial(int_num));
                break;

            case 7:
                printf("Enter number of terms: ");
                scanf("%d", &n);
                if (n < 0) {
                    printf("Error: Invalid input!\n");
                } else {
                    printf("Fibonacci Series: ");
                    for (int i = 0; i < n; i++) {
                        printf("%.0lf ", fibonacci(i));
                    }
                    printf("\n");
                }
                break;

            case 8:
                printf("Exiting... Goodbye!\n");
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

// Function definitions
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }

// Recursive power
double power(double base, int exponent) {
    if (exponent == 0)
        return 1;
    if (exponent < 0)
        return 1 / power(base, -exponent);
    return base * power(base, exponent - 1);
}

// Recursive factorial
double factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

// Recursive fibonacci
double fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
