#include <stdio.h>
int main () 
{
	float latao = 0, zn = 0, cu = 0;
	
	printf("Quantos quilos de latao voce usou ?");
	scanf("%f",&latao);
	
	cu = (latao / 10)*7;
	zn = (latao/10)*3;
	
	printf("Voce usou %f kgs de cobre e %f kgs de zinco",cu,zn);
	return 0;
}
