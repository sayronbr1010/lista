#include <stdio.h>
#include <stdlib.h>

int main(){
int n1,par_impar=0;
scanf("%d",n1);

par_impar=n1%2;
if(par_impar!=0){
    printf("par");
}
else{
    printf("inpar");

}

