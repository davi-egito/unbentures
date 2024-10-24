/******************************************************************************
Here's a calculator to help you with simples tasks. You might insert two numbers and it will help ye with the result.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int number;
    do {
        printf("\n*** Ola, seja bem-vindo a calculadora que mostra o resultado que voce quer na tela ***\n");
        printf("Digite abaixo 1 para somar, 2 para subtrair, 3 para multiplicar e 4 para dividir!\n");
        scanf(" %d", &number);
            if (number == 1) {
                int somado_1;
                int somado_2;
                int soma_total;
                printf("Digite o primeiro número a ser somado\n");
                scanf("%d", &somado_1);
                printf("Digite o segundo número a ser somado\n");
                scanf("%d", &somado_2);
                printf("O resultado foi %d\n", somado_1 + somado_2);
            } else if (number == 2) {
                int subt_1;
                int subt_2;
                int subt_total;
                printf("Digite o primeiro número na subtração\n");
                scanf("%d", &subt_1);
                printf("Digite o segundo número na subtração\n");
                scanf("%d", &subt_2);
                printf("O resultado foi %d\n", subt_1 - subt_2); 
            } else if (number == 3) {
                int mult_1;
                int mult_2;
                int mult_total;
                printf("Digite o primeiro número na multiplicação\n");
                scanf("%d", &mult_1);
                printf("Digite o segundo número na multiplicação\n");
                scanf("%d", &mult_2);
                printf("O resultado foi %d\n", mult_1 * mult_2); 
            } else if (number == 4) {
                int div_1;
                int div_2;
                int div_total;
                printf("Digite o primeiro número na divisão\n");
                scanf("%d", &div_1);
                printf("Digite o segundo número na divisão\n");
                scanf("%d", &div_2);
                printf("O resultado foi %d\n", div_1 / div_2); 
            }
    } while (number <= 4);
    return 0;
}