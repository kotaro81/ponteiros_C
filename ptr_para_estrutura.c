#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[100];
    int idade;
}pessoa;

int main(){

    pessoa joao;
    pessoa *p = &joao;

    strcpy(joao.nome,"joao da silva");
    joao.idade = 20;
    printf("%s, %d\n", (*p).nome, (*p).idade);

    (*p).idade = 28;
    printf("%s, %d\n",joao.nome,joao.idade);

}

// operador '->' substitui '(*p)'
//entao poderiamos escrever, por exemplo, na linha 18: p->idade = 18;