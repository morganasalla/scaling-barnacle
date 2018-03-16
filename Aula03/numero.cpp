// marco.mangan@pucrs.br 2018-03-14 PEII Aula03 Programa Número

#include <iostream>			// inclui cabeçalho da biblioteca padrão
					// Input and Output Streams Library

int main()				// bloco principal, início do programa
{
	int n;				// guarda um valor inteiro de 1 a 5

	//printf("Digite um número\nentre 1 e 5:\n");	// escreve o texto na tela
	std::cout << "Digite um número\nentre 1 e 5:" << std::endl;

					// \n troca de linha

	//scanf("%d", &n);		// recebe o valor de um inteiro
	std::cin >> n;

	//printf("N=%d.\n", n);		// apresenta o valor recebido
	std::cout << "N=" << n << "." << std::endl;

	if (n < 1)
	{
		//printf("Número inválido! O valor deve ser maior do que 0.\n");
		std::cout << "Número inválido! O valor deve ser maior do que 0." 
		<< std::endl;
		return -10;
	}

	if (n > 5)
	{
		// printf("Número inválido! O valor deve ser menor do que 6.\n");
		std::cout << "Número inválido! O valor deve ser menor do que 6."
		<< std::endl;
		return -20;
	}


	int i;				// declara um contador
	for (i = 1; i <= n; i++)	// repete n vezes
	{
		//printf("%d ", i);	// apresenta o valor o contador
		std::cout << i << " ";
	}
	//printf("\n");			// troca de linha ao final
	std::cout << std::endl;


	return 0;			// o valor zero indica sucesso
}
















