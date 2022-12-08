#include <stdio.h>
#include <stdlib.h>

int num5(int* a){
    if(*a <= 0){
        *a = 0;
    } else if(*a > 0){
        *a = *a * 5;
    }
    return *a;

}

void main(){

    int n1 = 0;
    scanf("%d", &n1);
    printf("%d",num5(&n1));

}
