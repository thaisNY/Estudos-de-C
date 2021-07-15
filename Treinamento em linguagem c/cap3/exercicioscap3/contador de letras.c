#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main () 
{
	int cont=0;
	while(getche() != '\r')
		cont++;
	printf("\nO numero de caracteres eh %d\n",cont);
	system("PAUSE");
	return 0;
}
