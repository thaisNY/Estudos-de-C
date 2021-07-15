#include <stdio.h>
int retornarPar(int a);
int main()
{
	int a = 0;
	int b = 0;
	
	printf("Digite um valor para a");
	scanf("%d",&a);
	printf("Digite um valor para b");
	scanf("%d",&b);
	
	retornarPar(a);
	retornarPar(b);
	
	return 0;
}
int retornarPar(int a)
{
	if (a % 2 == 0)
		printf("o numero eh um valor par %d",a);
	else
		printf("o numero eh um valor impar %d",a);
}
