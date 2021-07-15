#include <stdio.h>
int somatres(int a, int b, int c);
int main()
{
	int a = 0;
	int b = 2;
	int c = 4;
	int resultado = 0;
	
	printf("Digite um valor para o primeiro parametro");
	scanf("%d",&a);
	
	resultado = somatres(a,b,c);
	
	printf("o resultado eh %d",resultado);
	
	return 0;
}
int somatres(int a,int b, int c)
{
	return a + b + c;
}
