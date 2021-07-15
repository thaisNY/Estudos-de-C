#include <stdio.h>
int compararValores(int a,int b);
int main ()
{
	int a = 0;
	int b = 0;
	
	printf("Digite um valor para a");
	scanf("%d",&a);
	printf("Digite um valor para b");
	scanf("%d",&b);
	
	compararValores(a,b);
	
	return 0;
}
compararValores(int a,int b)
{
	if (a>b)
		printf("A eh maior que B");
	else if (a<b)
		printf("A eh menor que B");
	else 
		printf("A eh igual a B");
}

