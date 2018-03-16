// marco.mangan@pucrs.br 2018-03-09 PEII Aula02 Programa Número

#include <stdio.h>			// inclui cabeçalho da biblioteca padrão
					// STDndard Input and Output Library

int main()				// bloco principal, início do programa
{
	int n;				// guarda um valor inteiro de 1 a 5

	printf("Digite um número\nentre 1 e 5:\n");	// escreve o texto na tela
					// \n troca de linha

	scanf("%d", &n);		// recebe o valor de um inteiro
	printf("N=%d.\n", n);		// apresenta o valor recebido

	if (n < 1)
	{
		printf("Número inválido! O valor deve ser maior do que 0.\n");
		return -10;
	}

	if (n > 5)
	{
		printf("Número inválido! O valor deve ser menor do que 6.\n");
		return -20;
	}


	int i;				// declara um contador
	for (i = 1; i <= n; i++)	// repete n vezes
	{
		printf("%d ", i);	// apresenta o valor o contador
	}
	printf("\n");			// troca de linha ao final


	return 0;			// o valor zero indica sucesso
}
















