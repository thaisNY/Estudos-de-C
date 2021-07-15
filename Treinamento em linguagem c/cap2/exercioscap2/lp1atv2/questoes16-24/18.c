#include <stdio.h>
int main () 
{	
	float raio,altura,volume;
	const float pi = 3.141592;
	printf("Digite o valor do raio e o valor da altura para calcular o volume de um cinlindro\n");
	scanf("%f %f",&raio,&altura);
	printf("O volume do cilindro eh : %f",pi * raio * raio * altura);
	return 0;
}


