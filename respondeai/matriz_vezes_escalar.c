#include <stdio.h>
#include <stdlib.h>

int main()
{
  char matriz[3][3];
  int i,j,num;
  
  scanf("%d",&num);
  
  for( i = 0; i<3;i++){
          for( j = 0; j <3 ; j++){
                  
                  scanf("%d *%d",&matriz[i][j]);
          }        
  }
  
   for( i = 0; i<3;i++){
        for( j = 0; j <3 ; j++)
            printf("%d",num*matriz[i][j]);
          printf("\n");
                
  }
  
  system("PAUSE");	
  return 0;
}
