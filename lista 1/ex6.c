#include <stdio.h>
#include <stdlib.h>

void main(){

char estado[2];
float valor=0;
printf("escolha um estado\nMG   SP   RJ   MS\n");
scanf("%s",&estado);
printf("qual e o valor\n");
scanf("%f",&valor);

printf("o novo valor E :");
if("MG"){
        valor= valor*1.07;
        printf("%f",valor);
}else if("SP"){
        valor= valor*1.12;
        printf("%f",valor);
}else if("RJ"){
        valor= valor*1.15;
        printf("%f",valor);
}else if("MS"){
        valor= valor*1.08;
        printf("%f",valor);
}else {
    printf("estado sem informacao");
}
}
