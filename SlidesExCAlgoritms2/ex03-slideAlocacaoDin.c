#include <stdio.h>
#include <stdlib.h>

//Fun��o para alocar mem�ria > malloc(num_bytes)
//Fun��o para liberar a mem�ria > free(endereco_regiao_alocada)

main(){
	// alocando um inteiro
	int *p = (int*) malloc(sizeof(int)); 
	
	if(p){ //se p � true ou existe
		*p = 3; //Comente
		printf("%d\n", *p); //sem atribuir valor ele retorna endereco da memoria
		free(p);
	}
}

