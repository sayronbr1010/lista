#include <stdio.h>
#include <stdlib.h>

void funcao(int* a){
    *a=*a+20;
    printf("%d", *a);
}


int main(){

    int num = 0;
    scanf("%d", &num);

    funcao(&num);

}
