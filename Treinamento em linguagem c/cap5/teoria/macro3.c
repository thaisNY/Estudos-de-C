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
//se uma fun��o for escrita como no lugar do macro para calcular a soma de 2 numeros
//ser� necessario respeitar os tipos de seus argumentos 
//por outro lado a falta de avalia��o dos argumentos pode causar resultados inesperados
