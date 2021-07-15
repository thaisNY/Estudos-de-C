#include <stdio.h>
int maiorEntreVarios(int valores[],int qtd);
int menorEntreVarios(int valores[],int qtd);
int main()
{
	int qtd = 0;
	int valor = 0;
	int cont = 0;
	int i = 0;
	
	printf("Quantos valores voce pretende digitar");
	scanf("%d",&qtd);
	
	int valores[qtd];
	
	while (1)
	{
		printf("Digite um valor");
		scanf("%d",&valor);
		valores[cont] = valor;
		cont++;
		if (cont == qtd)
			break;
	}
	for (i=0;i<=qtd;i++) // para exibir o aray
	{
		printf("%d\n",valores[i]);
	}
	return 0;
	maiorEntreVarios(valores,qtd); // nao precisa de [] pq a variavel já foi criada 
	menorEntreVarios(valores,qtd);
	
	return 0;
	
}
int maiorEntreVarios(int valores[],int qtd) // parametros sao as informaçoes que eu peguei na main
{
	int maior = valores[0];
	int i = 0;
	for (i=0;i<=qtd;i++)
	{
		if (valores[i] > maior)
			maior = valores[i];
	}
	printf("O maior numero entre todos eh %d",maior);
}
int menorEntreVarios(int valores[],int qtd) // parametros sao as informaçoes que eu peguei na main
{
	int menor = valores[0];
	int i = 0;
	for (i=0;i<=qtd;i++)
	{
		if (valores[i] < menor)
			menor = valores[i];
	}
	printf("O menor numero entre todos eh %d",menor);
}
