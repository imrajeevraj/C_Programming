//Program to print a square with 4 columns and 4 rows using asterisks (*)
#include <stdio.h>

int main() {
    int i,j;
    for (i=1; i<=4; i++) {
        for (j=1; j<=4; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}