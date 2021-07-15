#include <stdio.h>
#include <stdlib.h>
int soma (int,int); // sempre declarar fora
int main()
{	int a= 4;
	int b = 3;
	int c = 0;
	c = soma(a,b);
	printf("O valor da soma eh  %d",c);
	return 0;
}
int soma(int a,int b)
{
	return a + b;
}
