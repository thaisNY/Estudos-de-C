#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int i = 0;
	for (i=0;i<18;i++)
		printf("E");
	printf("\n");
	for (i = 0;i<17;i++)
	{
		printf("E\n");
		if (i == 9)
		{
			for (i=0;i<9;i++)
				printf("E");
			printf("\n");
		}
	}
	for (i=0;i<18;i++)
		printf("E");
	printf("\n");
	return 0;
}
