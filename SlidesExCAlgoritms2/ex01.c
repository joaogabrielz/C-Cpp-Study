#include <stdio.h>
#include <stdlib.h>

//Escreva Algoritmo que
//a) Desclare inteiro,  um real e um caracter
// e ponteiros de inteiro, real e caracter.
//b) Atritbua as variaveis aos ponteiros(use &)
//c) Modifique os valores de cada variavel usando ponteiros
//d) Imprima as valores das varivaies antes e depois de cada modificação

void main(){
	int v1 = 30;
	float v2 = 0.50;
	char v3 = "S";
	
	int *Pi;
	float *Pf;
	char *Pc;
	
	Pi = &v1;
	Pf = &v2;
	Pc = &v3;
	
	*Pi = 2;
	*Pf = 0.2;
	*Pc = "N";
	
	printf("> Valor de *Pi: %d ",*Pi);
	printf("> Valor de v1: %d \n", v1);
	
	printf("> Valor de *Pf: %f ",*Pf);
	printf("> Valor de v2: %f \n", v2);
	
	printf("> Valor de *Pc: %c ",*Pc);
	printf("> Valor de v3: %c \n", v3); //???
	
}

