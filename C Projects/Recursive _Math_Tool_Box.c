// C Programming Project – Recursive Math Tool Box
// By Rajeev Ranjan

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

#define PI 3.14159265358979323846

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, int exponent);     
double factorial(int n);                  
double sine(double degrees);
double cosine(double degrees);
double tangent(double degrees);
double logarithm(double value);
double natural_logarithm(double value);
double square_root(double value);
void clear_input_buffer();

// Main function
int main() {
    int choice;
    double num1, num2, result;
    int int_num;

    while (1) {
        printf("\n=== Recursive Math Tool Box ===\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power (Recursive)\n");
        printf("6. Factorial (Recursive)\n");
        printf("7. Sine\n");
        printf("8. Cosine\n");
        printf("9. Tangent\n");
        printf("10. Logarithm (base 10)\n");
        printf("11. Natural Logarithm\n");
        printf("12. Square Root\n");
        printf("13. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        clear_input_buffer();

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
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                printf("Result: %.6lf\n", sine(num1));
                break;

            case 8:
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                printf("Result: %.6lf\n", cosine(num1));
                break;

            case 9:
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                printf("Result: %.6lf\n", tangent(num1));
                break;

            case 10:
                printf("Enter positive number: ");
                scanf("%lf", &num1);
                if (num1 <= 0)
                    printf("Error: Invalid input!\n");
                else
                    printf("Result: %.6lf\n", logarithm(num1));
                break;

            case 11:
                printf("Enter positive number: ");
                scanf("%lf", &num1);
                if (num1 <= 0)
                    printf("Error: Invalid input!\n");
                else
                    printf("Result: %.6lf\n", natural_logarithm(num1));
                break;

            case 12:
                printf("Enter non-negative number: ");
                scanf("%lf", &num1);
                if (num1 < 0)
                    printf("Error: Invalid input!\n");
                else
                    printf("Result: %.6lf\n", square_root(num1));
                break;

            case 13:
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

// Recursive power function
double power(double base, int exponent) {
    if (exponent == 0)
        return 1;
    return base * power(base, exponent - 1);
}

// Recursive factorial
double factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

double sine(double degrees) {
    return sin(degrees * PI / 180);
}

double cosine(double degrees) {
    return cos(degrees * PI / 180);
}

double tangent(double degrees) {
    return tan(degrees * PI / 180);
}

double logarithm(double value) {
    return log10(value);
}

double natural_logarithm(double value) {
    return log(value);
}

double square_root(double value) {
    return sqrt(value);
}

void clear_input_buffer() {
    while (getchar() != '\n');
}
