#include <stdio.h>
#include <stdlib.h>

int main(){
float salario, prestacao=0;

printf("qual o salario:");
scanf("%f",&salario);

printf("\nqual o prestacao:");
scanf("%f",&prestacao);

if(prestacao>salario/5){
    printf("\nEmprestimo nao concedido.");
}else{
    printf("\nEmprestimo concedido.");
}
}
