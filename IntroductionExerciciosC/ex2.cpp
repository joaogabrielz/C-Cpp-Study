#include <stdio.h>
#include <stdlib.h>

//void main()

//main(void)
//{
//char produto[30];
//printf("Informe o nome do produto: \n");
//scanf("%s", &produto);                  //Nao Suporta Compostos "Arroz Integral"
//
//printf("Produto: %s \n", produto);
//}

main(void)
{
char produto[30];
printf("Informe o nome do produto: \n");
scanf("\n%[^\n]s", &produto);

printf("Produto: %s \n", produto);
}
