#include <stdio.h>

int main() {
    int i, j;
    printf("Enter Your Day Between Monday to Saterday(Using 1 to 6): ");
    scanf("%d", &i);

        switch(i) {
            case 1:
                printf("Monday:\n");
                break;
            case 2:
                printf("Tuesday:\n");
                break;
            case 3:
                printf("Wednesday:\n");
                break;
            case 4:
                printf("Thursday:\n");
                break;
            case 5:
                printf("Friday:\n");
                break;
            case 6:
                printf("Saturday:\n");
                break;
        }
        for (j = 1; j <= 6; j++) {
            if (i == 1 || i == 2 || i == 4|| i == 5) 
                printf("  Lecture %d\n", j);
            
            else if (i == 3 && (j == 1 || j == 2 || j == 3 || j == 4))
                printf("  Lecture %d\n", j);
            
            else if (i == 6 && j == 1 )
                printf("  Lecture %d\n", j);
            
        }
        printf("\n");
    
    return 0;
}