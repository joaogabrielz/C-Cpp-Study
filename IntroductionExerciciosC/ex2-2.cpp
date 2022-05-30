#include <stdio.h>
#include <stdlib.h>

main(void)
{
char produto[30];
printf("Informe o nome do produto: \n");
fgets(produto, 30, stdin);

printf("Produto: %s \n", produto);
}
