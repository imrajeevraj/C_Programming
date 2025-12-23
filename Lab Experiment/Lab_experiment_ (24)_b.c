// C program that displays a menu asking the user to print a multiplication table or exit. Using Do-While
#include <stdio.h>

int main(void){
    int n;

    do {
        printf("Press 1: To print a Table\nPress 0: To exit\n");
        scanf("%d", &n);
        if (n != 1 && n != 0) {
            printf("Invalid Input\n");
            continue;
        }

        if (n == 1) {
            int num;
            printf("Enter your Number: ");
            scanf("%d", &num);
            int i = 1;
            do {
                printf("%d x %d = %d\n", num, i, num * i);
                i++;
            } while (i <= 10);
        }
    } while (n != 0);
    
    printf("Exit\n");
    return 0;
}