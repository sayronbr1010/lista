#include <stdio.h>
#include <stdlib.h>
float func(float fahrenheit){
    return(fahrenheit - 32.0) * (5.0/9.0);

}
void main(){

    float c;
    scanf ("%f", &c);
    printf("Celsius: %f\n", func(c));
}
