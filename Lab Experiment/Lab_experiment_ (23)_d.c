// Program to print a reverse right angle triangle with 5 columns and 5 rows 
//using asterisks (*)
#include <stdio.h>

int main() {
    int i,j;
    for (i=5; i>=1; i--) {
        for (j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}