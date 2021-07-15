#include <stdio.h>
int main () 
{
	float total = 0, primeiro = 0, segundo = 0, terceiro = 0, valor_primeiro = 0, valor_segundo = 0, valor_terceiro = 0;
	
	printf("Quantos pontos fez o primeiro,segundo e terceiro colocado");
	scanf("%f %f %f",&primeiro,&segundo,&terceiro);
	
	total = primeiro + segundo + terceiro;
	valor_primeiro = (780000 / total)*primeiro;
	valor_segundo = (780000/total)*segundo;
	valor_terceiro = (780000/total)*terceiro;
	
	printf("O premio do primeiro foi %f , do segundo %f do terceiro %f",valor_primeiro,valor_segundo,valor_terceiro);
	return 0;
}
