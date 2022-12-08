#include <stdio.h>
#include <stdlib.h>

#define num 10
float somar (float *veto)
{
  float  soma = 0;

  for (int i = 0; i < num; i++)
    soma = soma + veto[i];
    return soma;
}

void main(){
  float vet[num];
  for (int i = 0; i < num; i++){
    scanf("%f", &vet[i]);
  }
  printf ("a soma e %f", somar(vet));

}
