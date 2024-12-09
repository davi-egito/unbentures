#include <stdio.h>

int main(void){
    int vet[]= {10,20,30};
    int *p = vet;
    p++; // pula para o valor em vet[1]
    printf("\n%d", *p);
    (*p)++; // incrementa o valor em vet[1]
    printf("\ - %d", *p);
    printf("\ - %d", (*p+1)); // imprime o valor em vet[1] + 1
    return 0;
}