#include <stdio.h>
void imprimircidade(char cidade[]);
int main ()
{
	char cidade[100];
	
	printf("Digite o nome de uma cidade");
	scanf("%s",cidade);
	
	imprimircidade(cidade);
	return 0;
}
void imprimircidade(char cidade[])
{
	printf("o nome da cidade que voce digitou foi %s",cidade);
}
