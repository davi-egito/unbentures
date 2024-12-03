/*Defina a função div que recebe como argumentos dois números naturais  m e  n e devolve o resultado da divisão inteira de  m por  n. 
Você não pode recorrer às operações aritméticas de multiplicação, divisão e resto da divisão inteira.*/

#include <stdio.h>
#include <stdlib.h>

int div(int m, int n){
    if(m < n){
        return 0;
    }
    return 1 + div(m-n, n);
}