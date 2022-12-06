#include <stdio.h>
#include <stdlib.h>

void main(){

char op;
int n1, n2=0;
int total=0;

printf("digite uma operacao \n+     -     /     *\n");
scanf("%s",&op);

printf("digite dois muneros\n");
scanf("%d %d",&n1,&n2);

if(op=='+'){
    total = n1+n2;
    printf("%d",total);
}else if(op=='-'){
    total = n1-n2;
    printf("%d",total);
}else if(op=='/'){
    total = n1/n2;
    printf("%d",total);
}else if(op=='*'){
    total = n1*n2;
    printf("%d",total);
}else{
printf("invalido");
}

}
