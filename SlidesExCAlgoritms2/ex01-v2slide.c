#include <stdio.h>
#include <stdlib.h>

typedef struct{ //Resgitro
	char nome[100];
	int idade;
}pessoa;

main(){
	pessoa joao;
	pessoa *p = &joao;
	
	strcpy(joao.nome, "Jao da silva");
	joao.idade = 22;
//	printf("%s ",joao.nome);
//	printf("%d \n", joao.idade);
	
	printf("%s, %d\n", p->nome, p->idade);
	
	p->idade = 15;
     printf("%s, %d\n", joao.nome, joao.idade);
}

//Operador (->) substitui (*p)
