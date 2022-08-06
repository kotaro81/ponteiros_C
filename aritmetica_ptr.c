// ponteiros sao valores numericos e portanto podem sofrer operações aritmeticas simples
// Considerando N o tamanho do tipo apontado por um ponteiro(em bytes), temos:

/*
++: o valor do ponteiro é incrementado de N
--: o valor do ponteiro é decrementado de N
p+=V: somando V ao ponteiro, seu valor é incrementado V*N
p-=: subtraindo V do ponteiro, seu valor é decrementado de V*N
Alem disso, ponteiros podem ser comparados(<,>,>=,<=,==,!=,etc)
*/

#include <stdio.h>

int main(void){

    int nota[5] = {45,78,92,73,87};
    int *p;

    p = nota; //p aponta para nota[0]
    printf("p:%p *p:%d\n",p,*p);
    p++;
    printf("p:%p *p:%d\n",p,*p); //p aponta para nota[1]

    //perceba que o endereço "pulou" 4 bytes e ponteiro apontou para o proximo valor da lista
    




    return 0;
}