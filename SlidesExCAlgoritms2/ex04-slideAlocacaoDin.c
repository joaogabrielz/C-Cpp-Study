#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[100];
	int idade;
}pessoa;

main(){
	//Alocando uma estrutura
	pessoa *p = (pessoa*) malloc(sizeof(pessoa));
	if(p){
		p->idade = 3; //*p.idade = 3;
		printf("%d\n", p->idade); //*p.idade
		free(p);
	}
}
