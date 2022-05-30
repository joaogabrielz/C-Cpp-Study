#include <stdio.h>
#include <stdlib.h>

void main()
{
	int *pNum, num;
	//(*Pnum) Ponteiro recebe endereco de memoria (&num)
	pNum = &num;
	
	//atribuindo um valor no endereco de memoria
	//no qual pNum aponta
	*pNum = 11;
	
	printf("conteudo de num: %d \n", num);
	
	//imprimindo o endereco para o qual pNum aponta
	printf("conteudo de pNum: %d \n", pNum);
	//imprimindo o conteudo do apontamento de pNum
    printf("conteudo do apontamento de pNum: %d \n", *pNum);
}

//Observe que na linha 7 o endereço de memória da variável num foi atribuído à
//pNum, isso quer dizer que a partir deste momento, pNum aponta para num. Assim, na
//linha 10 foi atribuído, por meio do ponteiro pNum, o valor 10 ao endereço de memória
//da variável num, para isso, bastou indicar o * antes do nome do ponteiro. Apesar de
//pNum ter recebido o valor 10, como este ponteiro aponta para num, então o conteúdo
//da variável num foi atualizado, e portanto, o resultado produzido pela instrução da
//linha 11, será a impressão do valor 10.
