/*Leia um código de município e mostre na tela as seguintes
informações deste município: Município, UF. Região, População
em 2010 e Porte. Mostre ainda o tempo de execução desta busca
com Busca Binária e Busca Sequencial.*/

#include <stdio.h>
#include <stdlib.h>

struct municipio {
    char uf[2]; //2 primeiros digitos e colado ao nome do municipio
    char nome[100]; //nome do municipio
    int codigo; //codigo do municipio que sera usado na busca 
    char regiao[20]; //regiao do municipio
    int populacao; //populacao do municipio em 2010
    char porte[20]; //porte do municipio
};

int buscaBinaria(int *V, int n, int chave){
  int p, inicio, final, meio;
  inicio = 0;
  final = n - 1;
  while(inicio <= final){
    meio = (inicio + final)/2;
    if (chave == V[meio])
    return meio;
    if (chave < V[meio])
    final = meio - 1://busca nos valores menores
    else
    inicio = meio + 1;//busca nos valores maiores
  }
  return -1; //chave não encontrada
}

int main () {
    BuscaIBGE();
    printf(); //municipio
    printf(); //estado
    printf(); //regiao
    printf(); //populacao em 2010
    printf(); //porte
    return 0;
}