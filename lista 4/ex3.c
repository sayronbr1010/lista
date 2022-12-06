#include <stdio.h>
#include <stdlib.h>

#define num 5
void main(){

int vet[num], media=0;

for( int i =0; i<num; i++){
    scanf("%d",&vet[i]);
    media =media+(vet[i]/ num );
}
for( int i =0; i<num; i++){
    printf("%d,",vet[i]);
}
printf(" a media e %d",media);
}
