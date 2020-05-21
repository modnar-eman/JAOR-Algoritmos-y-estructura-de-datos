#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

#define PILA_TAMANIO 5

typedef struct
{
	int iPilaTope;
	int arrIntPila[PILA_TAMANIO];
}pila;

void sbPilaInicializada(pila *pPila)
{
	pPila->iPilaTope=-1;
	printf("Pila inicializada.....\n");
}

int FnIntPilaVacia(pila *pPila)
{
	if (pPila->iPilaTope==-1)
		return TRUE;
	else
		return FALSE;
}

int FnIntPilaLlena(pila *pPila)
{
	if (pPila->iPilaTope==PILA_TAMANIO-1)
		return TRUE;
	else
		return FALSE;
}

int FnIntPilaElementos(pila *pPila)
{
	return pPila->iPilaTope+1;
}

void sbPilaCima(pila *pPila)
{
	if (FnIntPilaVacia(pPila))
		printf("La pila está vacía no hay elementos\n");
	else
		printf("Pila Cima: %d", pPila->arrIntPila[pPila->iPilaTope]);
}


void sbPilaPush(pila *pPila, int iElemento)
{
	if (FnIntPilaLlena(pPila))
		printf("La pila está llena no es posible agregar el elemento: %d\n", iElemento);
	else
		{
		pPila->iPilaTope++;
		pPila-> arrIntPila[pPila->iPilaTope]=iElemento;
		printf("Se ha agregado el elemento %d a la pila\n", iElemento);
		}
}

int FnIntPilaPop(pila *pPila)
{
	if (FnIntPilaVacia(pPila))
		{
		printf("La Pila está vacía no es posibla sacar elementos\n");
		return pPila->iPilaTope;
		}

	else
		{
 			printf(" Se ha sacado un elemento de la pila \n");
			return(pPila->arrIntPila[pPila->iPilaTope--]);
		}
}

int main()
{
	printf("Curso de Algoritmos y estructura de datos en C\n");
	printf("Clase 11 - Pilas\n\n");

	pila xPila;
	int iElemento;

	sbPilaInicializada(&xPila);

	FnIntPilaVacia(&xPila) ? printf("La pila sí está vacía\n") : printf("La pila no está vacía\n");
	FnIntPilaLlena(&xPila) ? printf("La pila sí está llena\n") : printf("La pila no está llena\n");

	printf("Elementos en la pila: %d \n", FnIntPilaElementos(&xPila));

	sbPilaCima(&xPila);
	printf("\n");

	sbPilaPush(&xPila,34);

	FnIntPilaVacia(&xPila) ? printf("La pila sí está vacía\n") : printf("La pila no está vacía\n");
	FnIntPilaLlena(&xPila) ? printf("La pila sí está llena\n") : printf("La pila no está llena\n");

	printf("Elementos en la pila: %d \n", FnIntPilaElementos(&xPila));

	sbPilaCima(&xPila);
	printf("\n\n");

	sbPilaPush(&xPila,45);

	FnIntPilaVacia(&xPila) ? printf("La pila sí está vacía\n") : printf("La pila no está vacía\n");
	FnIntPilaLlena(&xPila) ? printf("La pila sí está llena\n") : printf("La pila no está llena\n");

	printf("Elementos en la pila: %d \n", FnIntPilaElementos(&xPila));

	sbPilaCima(&xPila);
	printf("\n\n");

	printf("Sacamos de la pila el elemento: %d \n",FnIntPilaPop(&xPila));
    FnIntPilaVacia(&xPila) ? printf("La pila sí está vacía\n") : printf("La pila no está vacía\n");
    FnIntPilaLlena(&xPila) ? printf("La pila sí está llena\n") : printf("La pila no está llena\n");

	printf("Elementos en la pila: %d\n", FnIntPilaElementos(&xPila)); 
	sbPilaCima(&xPila);
	printf("\n\n");

	sbPilaPush(&xPila,103);
	sbPilaPush(&xPila,104);
	sbPilaPush(&xPila,105);
	sbPilaPush(&xPila,106);
	sbPilaPush(&xPila,107);

	FnIntPilaVacia(&xPila) ? printf("La Pila sí está vacía\n") : printf("La pila no está vacía\n");
	FnIntPilaLlena(&xPila) ? printf("La Pila sí está llena\n") : printf("La pila no está llena\n");

	printf("Sacamos de la pila el elemento: %d \n",FnIntPilaPop(&xPila));
	printf("Sacamos de la pila el elemento: %d \n",FnIntPilaPop(&xPila));
	printf("Sacamos de la pila el elemento: %d \n",FnIntPilaPop(&xPila));
	printf("Sacamos de la pila el elemento: %d \n",FnIntPilaPop(&xPila));
	printf("Sacamos de la pila el elemento: %d \n",FnIntPilaPop(&xPila));
	printf("Sacamos de la pila el elemento: %d \n",FnIntPilaPop(&xPila));

	return 0;


}






























