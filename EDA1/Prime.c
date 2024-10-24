/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //declarar variavel
    int numero; 
    int cont_divisores; //Contar os divisores
    //guardar variavel
    scanf("%d", &numero);
    cont_divisores = 0;
    for (i = numero; i >= 1; i--) {
        if(numero % i == 0) {
            //Se i for divisor de numero
            //Incrementa-se a contagem de divisores
            cont_divisores++;
        }
    }
    if (cont_divisores == 2) {
        printf("O número é primo.\n");
    } else {
        printf("O número não é primo.\n");
    }

    return 0;
}
