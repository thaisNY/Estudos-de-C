#include <stdio.h>

int main(){
  int matriz[3][4];
  int i,j;
  int sum;

  
  for( i = 0; i < 3; i++){
  	
          for( j = 0; j <4 ; j++){
                  scanf("%d",&matriz[i][j]);
                  fflush(stdin);
          }        
  }
  
  sum = 0;
  
  for(i = 0; i < 3; i++){
  	
        for( j = 0; j <4; j++){
        	sum += matriz[i][j];
    	}
    	
    	printf("A soma da linha %d eh %d\n", i, sum);
    	sum = 0;
  }
  
  return 0;
}


