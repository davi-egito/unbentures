/* Dado um vetor de números reais e o seu número de elementos, fazer uma função recursiva que calcula 
a média dos elementos do vetor*/

#include <stdio.h>
#include <stdlib.h>

float media(float *vetor, int n){
    if(n == 1){
        return vetor[0];
    }else{
        return (vetor[n-1] + media(vetor, n-1));
    }
}