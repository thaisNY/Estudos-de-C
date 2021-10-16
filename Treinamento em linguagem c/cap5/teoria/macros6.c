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
// ctype.h tem várias funções que são implementadas como macros
//ao usar macros inves de funlções o programa será mais rápid0
//em contrapartida o código do programa será aumentado
//n há necessidade de especificar o tipo dos argumentos
