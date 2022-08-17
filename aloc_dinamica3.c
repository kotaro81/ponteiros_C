//alocando um vetor com 3 inteiros

#include <stdio.h>

int main(void){

    int *v = (int*) malloc(3*sizeof(int));
    if(v){
        v[0] = 10;
        v[1] = 20;
        v[2] = 30;
        printf("%d %d %d\n",v[0],v[1],v[2]);
        free(v);
    }


    return 0;
}