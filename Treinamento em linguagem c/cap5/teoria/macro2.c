#include <stdio.h>
#include <stdlib.h>

#define PI         3.1416
#define SQR(x)     ((x)*(x))
#define AREA(x)    ((4)*(PI)*SQR(x))
int main()
{
  float raio;
  
  printf("Digite o raio de uma esfera: ");
  scanf("%f",&raio);
  printf("A area da esfera eh %f.\n",AREA(raio));
  
  system("PAUSE");	
  return 0;
}
//um macro pode ser definido por outro macro
//o macro com texto grande pode ser escrito em mais de uma linha para isso se usa
// a barra invertida
/* #define MAISC(ch)      ((ch) >= 'a' && (ch) <= 'z') ? \
                          ((ch - 'a' + 'A') : (ch)
*/
