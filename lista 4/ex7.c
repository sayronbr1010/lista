#include <stdio.h>
#include <stdlib.h>

#define num 10
void main(){


    int vet[num];
    int a=0, b=0;

    for(int i = 0; i <num; i++){
        scanf("%d", &vet[i]);
        if(vet[i] < 0){
            a++;
        }
        if(vet[i] > 0){
            b = b + vet[i];
        }
    }
    printf("\nnegativos %d \nSoma dos positivos %d", a, b);



}
