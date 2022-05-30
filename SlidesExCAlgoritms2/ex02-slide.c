#include <stdio.h>
#include <stdlib.h>

//Estruturas auto-referenciadas

typedef struct pessoa pessoa;
struct pessoa 
{ //Resgitro
	char nome[100];
	int idade;
	pessoa *pai;
};

main(){
	pessoa joao, pedro;
	pessoa *p = &joao;
	
	strcpy(joao.nome, "Juan da silva"); 
	joao.idade = 20;

	strcpy(pedro.nome, "pedro flores");
	pedro.idade = 17;
	
	joao.pai = &pedro; //Ponteiro pai recebe end de pedro  ( -> == (*p))
	printf("%s, %d\n", joao.pai->nome, joao.pai->idade); //pedro //17
	
	printf("%s, %d\n", p->pai->nome, p->pai->idade); //pedrio //17
	
//ou	
//printf("%s, %d\n", (*(*p).pai).nome, (*(*p).pai).idade); //pedro //17
	
}


