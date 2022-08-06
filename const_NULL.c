//pegando um endreço e armazenando em um ponteiro
// int numero = 5;
// int *numeroPtr = &numero;
//fazer int *numeroPtr = numero; é um erro,pois ponteiros armazenam endereços


//é interessante inicializar os ponteiros,pois senão eles podem vir com lixo
//é uma boa prática apontar os ponteiros para a primeira posição de memoria, que é o NULL.
//Sempre que terminar de usar um ponteiro,coloque ele para apontar para NULL

//tipo *nome_do_ponteiro = NULL

//para saber que endereço um ponteiro armazena no printf,colocamos "%d" e depois somente o nome do ponteiro

#include <stdio.h>

int main(void){
    int inteiro;
    int *inteiro_ptr = &inteiro;

    printf("endereco da variavel 'inteiro': %d\n",&inteiro);
    printf("endereco armazenado no ponteiro 'inteiro_ptr': %d\n",inteiro_ptr);


    inteiro_ptr = NULL;
    printf("endereco armazenado no ponteiro 'inteiro_ptr': %d\n",inteiro_ptr);
    
    return 0;
}