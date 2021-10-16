#include <stdio.h>
#include <stdlib.h>

int main()
{
  char matriz[3][3];
  int i,j;
  for( i = 0; i<3;i++){
          for( j = 0; j <3 ; j++){
                  
                  scanf("%c *%c",&matriz[i][j]);
          }        
  }
  
   for( i = 0; i<3;i++){
        for( j = 0; j <3 ; j++)
            printf("%c",matriz[j][i]);
          printf("\n");
                
  }
  
  system("PAUSE");	
  return 0;
}
