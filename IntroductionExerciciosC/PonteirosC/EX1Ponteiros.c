#include <stdio.h>
#include <stdlib.h>

//na linha 7 o valor de *saldo é atualizado, ao realizar esta operação,
//como *saldo aponta para um endereço de memória, então o valor nesta região da
//9.3. Operações com Ponteiros 141
//memória é atualizado. Considerando que vSaldo, que pertence ao escopo da função
//main, aponta para o mesmo endereço de memória, então o valor desta variável também
//é atualizado. Neste momento, atingiu-se o objetivo de atualizar o valor da variável
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
