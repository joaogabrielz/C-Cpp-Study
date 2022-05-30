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

//Observe que na linha 7 o endere�o de mem�ria da vari�vel num foi atribu�do �
//pNum, isso quer dizer que a partir deste momento, pNum aponta para num. Assim, na
//linha 10 foi atribu�do, por meio do ponteiro pNum, o valor 10 ao endere�o de mem�ria
//da vari�vel num, para isso, bastou indicar o * antes do nome do ponteiro. Apesar de
//pNum ter recebido o valor 10, como este ponteiro aponta para num, ent�o o conte�do
//da vari�vel num foi atualizado, e portanto, o resultado produzido pela instru��o da
//linha 11, ser� a impress�o do valor 10.
