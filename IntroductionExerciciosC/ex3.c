#include <stdio.h>
#include <stdlib.h>
void main() {
int soma, num1, num2;

//trecho responsavel pela entrada dos dados
printf("Informe o primeiro numero:");
scanf("%d", &num1); //leitura de num1
printf("Informe o segundo numero:");
scanf("%d", &num2);           //Scanf recebe endereco varievel
 /* O trecho a seguir e responsavel pela soma dos valores de num1 e num2
informados pelo usuario do programa */
soma = num1 + num2;

printf("Resultado da soma: %d", soma);
}
