#include "ord.h" //Arquivo com as implementações das funções de ordenação
#define MAX 10

int main()
{
	int vetor[MAX] = {2, 3, 44, 11 , 50, 0, 8, 7, 6, 9}, vAux[MAX]; //Vetor desordenado
	int key, exit = 0;

	system("clear"); //Limpa a tela;

	while(!exit)
	{
		for(int i=0; i<MAX; i++) //Desordena o Array
		{
			vAux[i] = vetor[i];
		}
		
		printf("\nEscolha o metodo de Ordenacao:\n  \t1. Bubble Sort\n \t2. Selection Sort\n \t3. Insertion Sort\n \t0. SAIR\n");

		scanf("%i", &key);

		switch(key)
		{
			case 0:
				exit = 1;
				continue;
			case 1:
				bubble(vAux, MAX);
				break;
			case 2:
				selection(vAux, MAX);
				break;
			case 3:
				insertion(vAux, MAX);
				break;
			default:
				system("clear");
				printf("\nValor invalido!!\n");
				continue;
		}

		printf("\nArray Desordenado: \t\t Array Ordenado:\n");
		for(int i = 0; i<MAX; i++)
		{
			printf(" vetor[%d] = %d \t\t\t vetor[%d] = %d \n", i, vetor[i], i, vAux[i]);
		}
	}

	system("clear");
	return 0;
}
