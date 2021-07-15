#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//Tem precedencia sobre os binarios x++ (unario)
int main (){
	int n = 5; 
	int x;
	x = ++n;
	printf("\n N = %d e X = %d",n,x);
	return 0;
}
