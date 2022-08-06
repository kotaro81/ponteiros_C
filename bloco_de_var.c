//1 byte é uma posição,ou bloco de memoria
//o tipo double ocupa 8 bytes.Então esses 8 espaços de memoria sao alocados de forma contigua(um ao lado do outro).
//sempre que declaramos uma variavel que ocupa mais de um bloco de memoria., o seu endereço será o endereço do primeiro bloco,ou seja, do primeiro byte
// O mesmo ocorre para um ponteiro.os ponteiros armazenam o endereço de apenas um bloco de memória.
// Quando um ponteiro aponta para uma variável que ocupa vários bytes ele aponta para o primeiro byte.sempre o primeiro.

//o ponteiro sabe o endereço dos outros pois eles sao vizinhos

#include <stdio.h>

int main(void){
    char caractere1,caractere2;
    int inteiro1,inteiro2;


    printf("Caracteres: %d e %d\n",&caractere1,&caractere2); // de 1 em 1 byte
    printf("Inteiros:%d e %d\n",&inteiro1,&inteiro2); // de 4 em 4 bytes

    return 0;
}