#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int *x, valor, y;
	valor = 35;
	x = &valor; // Ponteiro x recebe o -Endereço de valor- ->nao 35
	y = *x;  //Atribuir conteudo da variavel apontada por x(valor = 35) pra y
	
	printf("Endereço da <variavel comum valor> %p\n", &valor);//%p(para exibir end de memoria)\n(Pula linha)
	
	printf("Lendo o <conteudo do Ponteiro x:> %p\n", x); //Ponteiro armazena endereco de memoria!!
	
	printf("<Endereço da variavel Ponteiro x:> %p\n", &x); //Endereco 4bites a frente, inteiro 32bits, 32/8= 4bits
	
	printf("<Conteudo da variavel apontada por x:> %d\n", *x); //%d(inteiros)
	printf("<Conteudo da variavel comum y:> %d\n", y);
	
}
