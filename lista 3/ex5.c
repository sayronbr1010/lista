#include <stdio.h>
#include <stdlib.h>
void ex(int n1){
    for(int i = 1; i<=n1; i++){
        for(int j = 0; j<i; j++){
            printf("!");
        }
    printf("\n");
    }
}
int main(){

    int num;
    scanf("%d", &num);
    ex(num);
}

