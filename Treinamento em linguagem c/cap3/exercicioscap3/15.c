# include <stdio.h>
# define TAMANHO 6
int main () 
{
	int i = 0;
	for ( i = 32; i < 255; i++)
	{
		printf(" %d = %c = %x\n",i,i,i);
	}
	return 0;
}
