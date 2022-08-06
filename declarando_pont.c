//sintaxe:
// tipo *nome_do_ponteiro
/*
precisamos dizer o tipo de variavel antes de declarar o ponteiro,por exemplo, se for um ponteiro de inteiro
estamos dizendo para o ponteiro guardar o endereço do primeiro bloco e os proximos 3 blocos,já que o inteiro tem 4 blocos
*/

//->vetores e ponteiros
//o nome de um vetor é na verdade um ponteiro para a primeira posição que o vetor ocupa na memoria.Ou seja, um vetor sempre aponta para o elemento 0

#include <stdio.h>

int main(void){

    int vetor[10];

    printf("imprimindo o vetor: %d\n",vetor);
    printf("imprimindo o endereco do primeiro elemento: %d\n",&vetor[0]);

    return 0;

}

//para declarar um ponteiro para um vetor:
//ptr = vet;
//pois o nome do vetor é um ponteiro para o primeiro elemento, entao poderiamos fazer:
//ptr = &vet[0]