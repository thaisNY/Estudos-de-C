#include <stdio.h>
#include <stdlib.h>

int main()
{
  char matriz[2][2];
  int i,j;
  float det;
  

  
  for( i = 0; i<2;i++){
          for( j = 0; j <2 ; j++){
                  
                  scanf("%d *%d",&matriz[i][j]);
          }        
  }
  
  det = (matriz[0][0]*matriz[1][1]) - (matriz[0][1] * matriz[1][0]);
  printf("%f\n",det);
  
  for( i = 0; i<2;i++){
        for( j = 0; j <2; j++)
            printf("%d",matriz[i][j]);
          printf("\n");
                
  }
  
 
  system("PAUSE");	
  return 0;
}



