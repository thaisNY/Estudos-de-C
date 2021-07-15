//loucura da impressao do printf
#include <stdio.h>
int main()
{
	int n =5;
	printf("%d \n %d \n %d",n,n+1,n++); // deveria ser 5,6,6 mas eh 6 7 5 pq ele leu da direita para esquerda
	return 0;
}
