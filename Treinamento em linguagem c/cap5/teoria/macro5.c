#include <stdio.h>
#include <stdlib.h>
#define MENOR(x,y)   (x < y ) ? (x) : (y)
int main()
{
  int n1 = 1, n2 = 2,n;
  
  n = MENOR(n1++, n2++);
  
  printf("n1 = %d \t n2 = %d \t n = %d \n",n1,n2,n);
  
  system("PAUSE");	
  return 0;
}
