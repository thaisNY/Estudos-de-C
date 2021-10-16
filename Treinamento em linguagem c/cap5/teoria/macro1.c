#include <stdio.h>
#include <stdlib.h>
#define PRN(n) printf("%.2f\n", (double)n)
int main()
{
  int n1,n2;
  n1 = 1416;
  n2 = n1/2;
  PRN(n1); //chama o macro
  PRN(n2);
  system("PAUSE");	
  return 0;
}
// na definição de 1 macro , nunca deve haver espaço em branco no identificador
//a falta de parenteses causa erro
//mas nem sempre os parenteses resolvel
