#include <stdio.h>
#include <stdlib.h>


int tempo(int horas, int min, int seg) {
		int soma;
		soma=(seg + (min * 60) + (horas * 3600));
		return soma;
	}

int main () {

	int h, mim, seg;

	scanf("%d%", &h);
	scanf("%d", &mim);
	scanf("%d", &seg);

	printf("O total em segundos e %d",tempo(h, mim, seg));
}

