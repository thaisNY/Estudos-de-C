#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int i = 3;
	printf("\n %d \n %d \n %d",(i=i+1),(i=i+1),(i=i+1)); //deu 6 no livro 6, 5, 4
	system("pause");
	return 0;
}
//operadores aritimieticos sao representados antes dos relacionais
