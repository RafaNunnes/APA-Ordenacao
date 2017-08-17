#include "ord.h"

void bubble(int *v, int tam)
{
	int i, ordenado = 0, aux;

	system("clear"); //Limpa a tela
	printf("\t\tBUBBLE SORT\n");

	while(!ordenado)
	{
		ordenado = 1;
		for(i=0; i<tam-1; i++)
		{
			if(v[i] > v[i+1])
			{
				ordenado = 0;
				aux = v[i];
				v[i] = v[i+1];
				v[i+1] = aux;
			}
		}
	}
}

void insertion(int *v, int tam)
{
	int i, j, aux;	
	
	system("clear"); //Limpa a tela
	printf("\t\tINSERTION SORT\n");

	for (i = 1; i < tam; i++) {
		j = i;
		while (j > 0 && v[j - 1] > v[j]) {
			aux = v[j];
			v[j] = v[j - 1];
			v[j - 1] = aux;
			j--;
		}
	}
}

void selection(int *v, int tam) 
{ 
	int i, j, min, aux;

	system("clear"); //Limpa a tela
	printf("\t\tSELECTION SORT\n");

	for (i = 0; i < (tam-1); i++) 
	{
		min = i;
		for (j = (i+1); j < tam; j++)
		{
			if(v[j] < v[min]) 
			min = j;
		}
		if (v[i] != v[min]) 
		{
			aux = v[i];
			v[i] = v[min];
			v[min] = aux;
		}
	}
}
