#include <stdio.h>
#include <stdlib.h>

void main(){
int num =0;

scanf("%d",&num);

if(num%3==0 && num%5==0){
    printf("e divisivel por 3 e 5");
}else{
    if(num%3==0){
        printf("e divisivel por 3");
    }
    if(num%5==0){
        printf("e divisivel por 5");
    }
printf("nao e divisivel por 3 e nem 5");
}
}

