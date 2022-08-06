//nada impede um ponteiro de conter o endreço de outro ponteiro

#include <stdio.h>

int main(void){

    int a = 231;
    int *pd; //ponteiro direto
    int **pi; //ponteiro indireto, equivale a int *(*p)

    pd = &a;
    pi = &pd;

    printf("endereco de a: %p\n",&a);

    printf("*pd vale %d\n",*pd);
    printf("*pi vale %p\n ",*pi);
    printf("**pi vale %d\n",**pi);


    return 0;
}