#include <stdio.h>
int main () 
{
	int dias = 0;
	float liquido = 0;
	
	printf("Quantos dias o trabalahador trabalhou ?");
	scanf("%d",&dias);
	
	liquido = (20*dias) - (20*dias*(0.08));
	
	printf("Ele vai receber %f",liquido);
	return 0;
}
