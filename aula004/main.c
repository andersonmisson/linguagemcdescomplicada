#include <stdio.h>
#include <stdlib.h>

int main(){
	int nro;
	float f;

	//printf("Digite um numero: ");
	//scanf("%d", &nro);

	printf("Digite dois numeros: ");
	scanf("%d%f", &nro, &f);

	//printf("Numero digitado: %d \n", nro);
	printf("Numeros: %d e %f\n", nro, f);

	system("pause");
	return 0;
}
