//programa para mostrar que o valor é alterado e o endereço é constante

#include <stdio.h>

int main(void){
    int num;
    char l;

    num = 1;
    l = 'a';
    

    printf("numero: \nvalor: %d\nendereco na memoria: %d\n",num,&num);
    printf("letra: \nvalor: %c\nendereco na memoria: %d\n",l,&l);
    
    printf("\n");
    printf("mudando os valores\n");
    printf("\n");

    num = 2;
    l = 'b';
    
    printf("numero: \nvalor: %d\nendereco na memoria: %d\n",num,&num);
    printf("letra: \nvalor: %c\nendereco na memoria: %d\n",l,&l);





    return 0;
}