#include <stdio.h>
#include <stdlib.h>

#define MAIUSC(ch) ((ch) >= 'a' && (ch) <= 'z') ? \
                   ((ch) - 'a' + 'A') : (ch)
int main()
{
  char cp;
  
  cp = MAIUSC(getch());
  printf("%c\n",cp);
  
  system("PAUSE");	
  return 0;
}
//se uma função for escrita como no lugar do macro para calcular a soma de 2 numeros
//será necessario respeitar os tipos de seus argumentos 
//por outro lado a falta de avaliação dos argumentos pode causar resultados inesperados
