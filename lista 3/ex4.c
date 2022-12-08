#include <stdio.h>
#include <stdlib.h>

int potencia(int x, int y) {
	if (y == 1){
        return x;
	} else{
        return (x * potencia(x, y-1));
	}
}

int main() {
	int x, y;

	scanf("%d", &x);
	scanf("%d", &y);

	printf("\nResultado: %d\n", potencia(x, y));
}
