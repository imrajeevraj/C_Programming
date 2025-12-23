// Program to print a equilateral triangle with 5 columns and 5 rows using asterisks (*)
#include <stdio.h>
int main() {
    int i,j;
    for (i=1; i<=5; i++) {
        for (j=5; j>=i; j--){
            
            printf(" ");
        }
        for (j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
