/******************************************************************************
Here's a calculator to help you with simples tasks. You might insert two numbers and it will help ye with the result.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int number;
    do {
        printf("\n*** Hello, and welcome to this simples task calculator! ***\n");
        printf("Type 1 to sum, 2 to subtract, 3 to multiply and 4 to divide!\n");
        scanf(" %d", &number);
            if (number == 1) {
                int sum_1;
                int sum_2;
                int sum_total;
                printf("Type the first number to be added\n");
                scanf("%d", &sum_1);
                printf("Type the second number to be added\n");
                scanf("%d", &sum_2);
                printf("The result was equal to: %d\n", sum_1 + sum_2);
            } else if (number == 2) {
                int subt_1;
                int subt_2;
                int subt_total;
                printf("Type the first number to be added\n");
                scanf("%d", &subt_1);
                printf("Type the second number to be added");
                scanf("%d", &subt_2);
                printf("The result was equal to: %d\n", subt_1 - subt_2); 
            } else if (number == 3) {
                int mult_1;
                int mult_2;
                int mult_total;
                printf("Type the first number to be added\n");
                scanf("%d", &mult_1);
                printf("Type the second number to be added");
                scanf("%d", &mult_2);
                printf("The result was equal to: %d\n", mult_1 * mult_2); 
            } else if (number == 4) {
                int div_1;
                int div_2;
                int div_total;
                printf("Type the first number to be added");
                scanf("%d", &div_1);
                printf("Type the second number to be added");
                scanf("%d", &div_2);
                printf("The result was equal to: %d\n", div_1 / div_2); 
            }
    } while (number <= 4);
    return 0;
}