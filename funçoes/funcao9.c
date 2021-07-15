#include <stdio.h>
int maiorEntreVarios(int valores[],int qtd);
int menorEntreVarios(int valores[],int qtd);
int main()
{
	int qtd = 0;
	int valor = 0;
	int cont = 0;
	int i = 0;
	int maior = 0,menor = 0;
	
	printf("Quantos valores voce pretende digitar\n");
	scanf("%d",&qtd);
	
	int valores[qtd];
	
	for (i=0;i<qtd;i++)
	{
		printf("Digite um valor");
		scanf("%d",&valor);
		valores[i] = valor;
	}
	for (i=0;i<qtd;i++) // para exibir o aray
	{
		printf("%d\n",valores[i]);
	}
	
	maior = maiorEntreVarios(valores,qtd); // nao precisa de [] pq a variavel já foi criada 
	menorEntreVarios(valores,qtd);
	
	printf("O maior entre todos eh %d",maior);
	printf("O menor entre todos eh %d",menor);
	
	return 0;
	
}
int maiorEntreVarios(int valores[],int qtd) // parametros sao as informaçoes que eu peguei na main
{
	int maior = valores[0];
	int i = 0;
	for (i=0;i<qtd;i++)
	{
		if (valores[i] > maior)
			maior = valores[i];
	}
	return maior;
}
int menorEntreVarios(int valores[],int qtd) // parametros sao as informaçoes que eu peguei na main
{
	int menor = valores[0];
	int i = 0;
	for (i=0;i<qtd;i++)
	{
		if (valores[i] < menor)
			menor = valores[i];
	}
	return menor;
} 
