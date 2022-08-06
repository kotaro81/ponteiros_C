//os ponteiros sao usados de tres formas:
//atribuição: atribuir um valor ao ponteiro
//leitura:ler o valor armazenado no ponteiro
//desreferenciar: ler o conteudo da posição de memoria apontada pelo ponteiro]

#include <stdio.h>

int main(void){
    int *p,a,b;
    a = 231;
    b = 7680;

    printf("endereco de a: %p\n",&a);
    printf("endereco de b: %p\n",&b);
    printf("endereco de p: %p\n",&p);

    printf("endereco para qual p aponta: %p\n",p); //valor de p(leitura)

    p = &a; //atribuir valor a p
    printf("endereco para qual p aponta(no caso eh o endereco de a): %p\n",p);
    printf("*p vale %d\n",*p); //desreferenciar p, valor de a




    return 0;
}

