#include <stdio.h>

int main ()
{
	char letra;
	letra = getchar ();
	letra = letra >= 'a' && letra <= 'z' ? 	letra - 32 : letra;
	putchar(letra);
	return 0;
}
