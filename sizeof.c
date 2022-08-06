//sempre que declaramos uma variavel em C,estamos alocando um espaço de bytes
//ex.:a variavel de tipo double tem o dobro de precisao, ou seja, podemos colocar mais casas decimais
//em variaveis desse tipo e,consequentemente,vamos precisar de um espaço maior em memoria

//para descobrir quantos bytes certa variavel ocupa pela função sizeof()
//sizeof retorna variaveis do tipo size_t

#include <stdio.h>
#include <stdbool.h>

int main(void){

    printf("char: %d bytes\n",sizeof(char));
    printf("int: %d bytes\n",sizeof(int));
    printf("float: %d bytes\n",sizeof(float));
    printf("double: %d bytes\n",sizeof(double));
    printf("bool: %d bytes\n",sizeof(bool));


    return 0;
}

