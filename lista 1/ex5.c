#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
int n1,quadrado,raiz=0;
scanf("%d", &n1);
quadrado=pow(n1,2);

if(n1>0){
    printf("quadrado: ");
    printf("%d", quadrado);
    raiz=sqrt(n1);
    printf("\nraiz:");
    printf("%d", raiz);
}
else{
    printf("numero negativo");
}
return 0;
}
