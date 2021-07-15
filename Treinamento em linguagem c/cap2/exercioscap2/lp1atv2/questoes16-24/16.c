#include <stdio.h>
int main () 
{	
	int ano = 0, bissexto = 0, res = 0;
	printf("Digite o ano que voce quer descobrir se eh bissexto ou nao");
	scanf("%d",&ano);
	bissexto = ( ( ( ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0) ) ? res = 1 : res = 0;
	printf("%d",res);
	return 0;
}
