// C program that performs addition, subtraction, multiplication, and division of two numbers using a function with call by reference.
#include <stdio.h>
void calculate(int *a, int *b, int *sum, int *diff, int *product, int *quotient){
    *sum = *a + *b;
    *diff = *a - *b;
    *product = *a * *b;
    if(*b != 0){
        *quotient = *a / *b;
    } else {
        printf("Division by zero is not allowed.\n");
        return;
    }
}

int main(){
    int num1, num2;
    int sum, diff, product, quotient;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    calculate(&num1, &num2, &sum, &diff, &product, &quotient);
    printf("Addition: %d + %d = %d\n", num1, num2, sum);
    printf("Subtraction: %d - %d = %d\n", num1, num2, diff);
    printf("Multiplication: %d * %d = %d\n", num1, num2, product);
    if(num2 != 0){
        printf("Division: %d / %d = %d\n", num1, num2, quotient);
    }
    return 0;
}