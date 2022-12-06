#include <stdio.h>
#include <stdlib.h>

#define num 4
void main(){

int a[num][num],b=0;


for( int i =0; i<num; i++){
    for( int j =0; j<num; j++){
        scanf("%d", &a[i][j]);

        if(a[i][j]>10){
            b++;
        }
    }
}
printf("tem %d acima de 10",b);
}
