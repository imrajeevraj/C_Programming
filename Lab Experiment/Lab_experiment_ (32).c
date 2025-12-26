// C program to calculate the factorial of a number using a function call by reference.
#include <stdio.h>
void factorial(int *n, long long *fact){
    *fact = 1;
    for(int i = 1; i <= *n; i++){
        *fact *= i;
    }
}


int main(){
    int number;
    long long fact;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

    factorial(&number, &fact);
    printf("Factorial of %d is: %lld\n", number, fact);
    
    return 0;
}