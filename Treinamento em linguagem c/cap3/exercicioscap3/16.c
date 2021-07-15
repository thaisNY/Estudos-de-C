#include <stdio.h>
int main()
{
	char esc;
	char x;
	
	printf("Digite um caracter\n");
	
	while (x != 27)
	{
		x = getch();
		x>= 'a' && x <= 'z' ? printf("%c = %c\n",x,x - 32) : printf("%c = %c\n",x,x);
		
	
		
	}

	return 0;
}
