// para que serve a alocacao dinamica?
//ela permite solicitar memoria em tempo de execução

//funcao para alocar memoria(stdlib.h):
//malloc(num_bytes)
//- retorna o endereço de memoria da regiao alocada
//- retorna zero se nao for possivel alocar

//funcao para liberar a memoria:
//free(endereco_regiao_alocada)
//- a regiao fica disponivel para outrar variaveis/alocacoes

#include <stdio.h>
#include <stdlib.h>

int main(void){

    //alocando um inteiro
    int *p = (int*) malloc(sizeof(int));
    if(p){
        *p=3;
        printf("%d\n",*p);
        free(p);
    }



    return 0;
}