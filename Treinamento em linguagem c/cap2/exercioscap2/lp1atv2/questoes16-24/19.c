#include <stdio.h>
int main () 
{
	int tot_cabeca = 0, tot_pes = 0, patos = 0 ,coelhos = 0;
	printf("Digite o total de cabecas e o total de pes");
	scanf("%d %d",&tot_cabeca,&tot_pes);
	patos = (((4 * tot_cabeca) - tot_pes)/2);
	coelhos = tot_cabeca - patos;
	printf("O total de patos eh : '%d' e total de coelhos eh : '%d' ",patos,coelhos);
	return 0;
}
