#include <stdio.h>
#include <stdlib.h>

void main(){
 int num;
scanf("%d",&num);

for(int i = 1; i < num+1; i++){
    if(num%i==0){
        printf("%d,", i);
    }
}
}
