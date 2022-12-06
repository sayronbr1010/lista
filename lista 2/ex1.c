#include <stdio.h>
#include <stdlib.h>

void main(){
int x,y;

scanf("%d",&x);
y=x;
for (int i = 0; i < y; i++){
    printf("%d,",x);
    x--;
}
}
