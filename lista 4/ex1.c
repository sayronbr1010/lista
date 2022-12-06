#include <stdio.h>
#include <stdlib.h>

#define num 3
void main(){

int vet[num];

for( int i =0; i<num; i++){
    scanf("%d",&vet[i]);
}
for( int i =0; i<num; i++){
    printf("%d,",vet[i]);
}
}
