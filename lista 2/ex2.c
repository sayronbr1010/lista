#include <stdio.h>
#include <stdlib.h>

void main(){
int x,y=0;

scanf("%d",&x);

while(x+1!=0){
    printf("%d,",y);
    y++;
    x--;
}
}
