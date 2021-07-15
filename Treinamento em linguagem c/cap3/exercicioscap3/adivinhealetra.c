#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main ()
{
	char ch = 's';
	char resp;
	char secreto;
	int tentativas;
	
	while (ch == 's')
	{
		secreto = rand() % 26 + 'a';
		tentativas = 1;
		printf("\n\nDigite uma letra entre 'a' e 'z' :\n");
		while ((resp=getch())!=secreto)
		{
			printf("%c eh incorreto. Tente novamente\n",resp);
			tentativas++;
		}
		printf("%c eh correto!!",resp);
		printf("Voce acertou em %d tentativas\n",tentativas);
		printf("\n Quer jogar novamente ? (s/n) :");
		ch=getch();
	}
	printf("\nAte logo e boa sorte!\n");
	system("PAUSE");
	return 0;
}
