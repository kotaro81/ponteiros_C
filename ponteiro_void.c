//ponteiros void nao podem ser desreferenciados.As operações aritmeticas sobre ponteiros
//"void" consideram tamanho basico de 1 byte

#include <stdio.h>

int main(){
    int a,b;
    a = 34;
    void *p;

    p = &a;
    

    printf("p vale %p\n",p);
    p++;
    printf("p vale %p\n",p);
    
    return 0;
}