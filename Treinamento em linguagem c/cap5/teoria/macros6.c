#include <stdio.h>
#include <stdlib.h>
int menor(int x, int y)
{
    return (x < y) ? x : y;
}
int main()

{
  int n1 = 1, n2 = 2,n;
  
  n = menor(n1++, n2++);
  
  printf("n1 = %d \t n2 = %d \t n = %d \n",n1,n2,n);
  
  system("PAUSE");	
  return 0;
}
// ctype.h tem v�rias fun��es que s�o implementadas como macros
//ao usar macros inves de funl��es o programa ser� mais r�pid0
//em contrapartida o c�digo do programa ser� aumentado
//n h� necessidade de especificar o tipo dos argumentos
