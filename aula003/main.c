#include <stdio.h>
#include <stdlib.h>

int main() {

	char letra = 'a';
	int nro = 10;
	float n = 5.25;

	printf("%c \n", letra); // %c -> Caractere
	printf("%d \n", letra); // %d -> inteiro (ASCII)
	printf("%d \n", nro);
	printf("%f \n", n);	// %f -> flutuante

	printf("Letra %c; inteiro %d \n", letra, nro);
	printf("Nro: %d; nro + 1: %d \n", nro, nro+1);

	system("pause");
	return 0;

}
