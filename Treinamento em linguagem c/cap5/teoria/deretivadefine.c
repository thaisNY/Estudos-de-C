#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
float area (float);
int main (){
    float raio;
    printf("Digite o raio da esfera: ");
    scanf("%f",&raio);
      
    printf("A area da esfera eh %.2f\n", area(raio));
      
    system("PAUSE");	
    return 0;
}

float area(float r)
{
      return (4 * PI * r * r);
// o PI eh chamado de identificador e o 3.14 de texto
// o identificador eh sempre escrito em letras maisculas
// não pode se ter mais de uma deretiva na mesma linha
// usando #define podemos definir textos ou instruções completas com o nome indicativo
// #define ERRO printf("ERRO")
// ...
// if (zebra)
//    ERRO; 
// o const pode ser usado para substituir definições de constante  o problema eh que
// o compilador vai ler o que foi definido com const como 1 espaço de memoria
// exatamente como ler variaveis e vai acusar erros de tipo , já usando o define 
// isso não acontece
