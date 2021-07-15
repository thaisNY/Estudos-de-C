// serve para ler um caracter sem a necessidade de aperter ender como no scanf
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main (){
    char ch;
    printf("\n Precione uma tecla");
    ch = getchar();
    printf("A tecla sucessora ASCII eh %c \n",ch + 1);
    system("pause");
    return 0;
}
