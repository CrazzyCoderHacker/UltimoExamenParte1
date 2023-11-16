#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int FILAS = 5;
int COLUMNAS = 7;

void llenarMatriz(int matriz[5][7]) 
{
    srand(time(NULL));

    for (int i = 0; i < FILAS; ++i) 
	{
        for (int j = 0; j < COLUMNAS; ++j) 
		{
            matriz[i][j] = rand() % (9 + 1 - 1);
        }
    }
}

void imprimirMatriz(int matriz[5][7]) 
{
    for (int i = 0; i < FILAS; ++i) 
	{
        for (int j = 0; j < COLUMNAS; ++j) 
		{
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int sumaDiagonalPrincipal(int matriz[5][7]) 
{
    int suma = 0;
    for (int i = 0; i < FILAS; ++i)
	{
        suma += matriz[i][i];
    }
    return suma;
}

int sumaPrimeraFila(int matriz[5][7]) 
{
    int suma = 0;
    for (int j = 0; j < COLUMNAS; ++j) 
	{
        suma += matriz[0][j];
    }
    return suma;
}

int sumaUltimaColumna(int matriz[5][7]) 
{
    int suma = 0;
    for (int i = 0; i < FILAS; ++i) 
	{
        suma += matriz[i][COLUMNAS - 1];
    }
    return suma;
}

int sumaFilasPares(int matriz[5][7]) 
{
    int suma = 0;
    for (int i = 1; i < FILAS; i += 2) 
	{
        for (int j = 0; j < COLUMNAS; ++j) 
		{
            suma += matriz[i][j];
        }
    }
    return suma;
}

int sumaColumnasImpares(int matriz[5][7]) 
{
    int suma = 0;
    for (int j = 1; j < COLUMNAS; j += 2) 
	{
        for (int i = 0; i < FILAS; ++i) 
		{
            suma += matriz[i][j];
        }
    }
    return suma;
}

int sumaTriangularSuperior(int matriz[5][7]) 
{
    int suma = 0;
    for (int i = 0; i < FILAS; ++i) 
	{
        for (int j = i + 1; j < COLUMNAS; ++j) 
		{
            suma += matriz[i][j];
        }
    }
    return suma;
}

int sumaTriangularInferior(int matriz[5][7]) 
{
    int suma = 0;
    for (int i = 0; i < FILAS; ++i) 
	{
        for (int j = 0; j < i; ++j) 
		{
            suma += matriz[i][j];
        }
    }
    return suma;
}

int main() {
    int matriz[5][7];

    llenarMatriz(matriz);

    imprimirMatriz(matriz);

    printf("\n\nSuma diagonal principal: %d\n", sumaDiagonalPrincipal(matriz));
    printf("Suma primera fila: %d\n", sumaPrimeraFila(matriz));
    printf("Suma ultima columna: %d\n\n", sumaUltimaColumna(matriz));
    
    printf("--------------------\n");
    
    printf("Suma filas pares: %d\n\n", sumaFilasPares(matriz));
    
    printf("--------------------\n");
    printf("Suma columnas impares: %d\n", sumaColumnasImpares(matriz));
    printf("Suma triangular superior: %d\n", sumaTriangularSuperior(matriz));
    printf("Suma triangular inferior: %d\n", sumaTriangularInferior(matriz));

    return 0;
}












