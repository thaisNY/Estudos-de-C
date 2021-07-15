#include <stdio.h>
int main () 
{	
	int ano = 0, bissexto = 0;
	printf("Digite o ano que voce quer descobrir se eh bissexto ou nao");
	scanf("%d",&ano);
	( ( ( ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0) ) > 0 ? printf("O ano eh bissexto") : printf("O ano nao eh bissexto");
	return 0;
}
