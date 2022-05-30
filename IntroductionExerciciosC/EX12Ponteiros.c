#include <stdio.h>
#include <stdlib.h>

//na linha 7 o valor de *saldo � atualizado, ao realizar esta opera��o,
//como *saldo aponta para um endere�o de mem�ria, ent�o o valor nesta regi�o da
//9.3. Opera��es com Ponteiros 141
//mem�ria � atualizado. Considerando que vSaldo, que pertence ao escopo da fun��o
//main, aponta para o mesmo endere�o de mem�ria, ent�o o valor desta vari�vel tamb�m
//� atualizado. Neste momento, atingiu-se o objetivo de atualizar o valor da vari�vel
//vSaldo, fora do escopo de main.

float calculaJuros(float *saldo, float taxa) {
	float juros;
	juros = *saldo * taxa / 100;
	*saldo += juros;
	return juros;
}

void main()
{
	float vSaldo, vTaxa, vResul;
	printf("Informe um saldo: \n");
	scanf("%f", &vSaldo);
	printf("Informe uma taxa: \n");
	scanf("%f", &vTaxa);
	
	vResul = calculaJuros(&vSaldo, vTaxa);
	
	printf("Juros.....: %f \n", vResul);
	printf("Saldo Novo: %f \n", vSaldo);
}
