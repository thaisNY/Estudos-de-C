#include <stdio.h>
int somatres(int a,int b,int c);
int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int resultado = 0;
	resultado = somatres(a,b,c);
	printf("o resultado eh %d",resultado);
	return 0;
}
int somatres(int a,int b,int c)
{
	return a + b + c;
}
