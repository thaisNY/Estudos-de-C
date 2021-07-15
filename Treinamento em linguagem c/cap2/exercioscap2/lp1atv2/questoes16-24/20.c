#include <stdio.h>
int main () 
{
	float amg1_bilhete = 0, amg2_bilhete = 0, premio = 0, num = 0, amg1_premio = 0, amg2_premio = 0;
	
	printf("Qual valor jogado pelo amigo1 ?\n");
	scanf("%f",&amg1_bilhete);
	printf("Qual o valor jogado pelo amigo2 ?\n");
	scanf("%f",&amg2_bilhete);
	printf("Qual o valor do premio ? ");
	scanf("%f",&premio);
	
	num = amg1_bilhete/amg2_bilhete;
	amg1_premio = (num * premio)/(1 + num);
	amg2_premio = premio - amg1_premio;
	
	printf("O premio do primeiro amigo foi : %f o premeio do segundo amigo foi %f",amg1_premio,amg2_premio);
	
	return 0;
}
