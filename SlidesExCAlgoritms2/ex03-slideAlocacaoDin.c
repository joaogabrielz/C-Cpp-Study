#include <stdio.h>
#include <stdlib.h>

//Função para alocar memória > malloc(num_bytes)
//Função para liberar a memória > free(endereco_regiao_alocada)

main(){
	// alocando um inteiro
	int *p = (int*) malloc(sizeof(int)); 
	
	if(p){ //se p é true ou existe
		*p = 3; //Comente
		printf("%d\n", *p); //sem atribuir valor ele retorna endereco da memoria
		free(p);
	}
}

