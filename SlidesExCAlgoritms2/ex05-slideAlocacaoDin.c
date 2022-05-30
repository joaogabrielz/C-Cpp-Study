#include <stdio.h>
#include <stdlib.h>

main(){
	//alocando um vetor 3 inteiros
	int *v = (int*) malloc( 3 * sizeof(int) );
	if(v){
		v[0] = 10;
		v[1] = 20;
		v[2] = 30;
		printf("%d %d %d\n", v[0], v[1], v[2]);
		free(v); 
	}
}
