#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[3][3];
    int sumaFila = 0;
    int sumaDiagonalTotal = 0;
    int i;
    int j;

    printf("Ingrese los elementos de la matriz 3x3:\n");
    for (i = 0; i < 3; ++i) 
	{
        int sumaFilaActual = 0; 

        for (j = 0; j < 3; ++j) 
		{
            printf("%d. ", i * 3 + j + 1);
            scanf("%d", &matriz[i][j]);
            sumaFilaActual += matriz[i][j];

            
            if (i == j)
			 {
                sumaDiagonalTotal += matriz[i][j];
            }
        }

        printf("Suma de la fila %d: %d\n", i + 1, sumaFilaActual); 
    }

    printf("\nMatriz ingresada:\n");
    
    
    for (i = 0; i < 3; ++i) 
	{
        for (j = 0; j < 3; ++j)
		 {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; ++i) 
	{
        int sumaFilaActual = 0;

        for (j = 0; j < 3; ++j) 
		{
            sumaFilaActual += matriz[i][j];
        }

	        if (i == 0)
			{
	            sumaFila = sumaFilaActual;
	        }

		        if (sumaFilaActual != sumaFila) 
				{
		            printf("\nLa matriz no es magica.\n");
		            return 0;
		        }
    }

    int sumaDiagonalPrincipal = matriz[0][0] + matriz[1][1] + matriz[2][2];
    int sumaDiagonalSecundaria = matriz[0][2] + matriz[1][1] + matriz[2][0];

    if (sumaDiagonalPrincipal != sumaFila || sumaDiagonalSecundaria != sumaFila) 
	{
        printf("\nLa matriz no es magica.\n");
    } 
			else
			 {
		        printf("\nLa matriz es magica.\n");
		    }

    printf("Suma total de la diagonal: %d\n", sumaDiagonalTotal);

    return 0;
}


