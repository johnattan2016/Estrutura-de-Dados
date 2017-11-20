/*Escreva um programa que gere duas matrizes
aleatórias de mesmo tamanho; apresente-as na
tela; faça a soma das duas e apresente a soma
na tela.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
	int h= time(NULL);
	srand(h);
	int ordem = rand()%5;
	int i, j, m, n;

    printf(" Ordem matriz: %d \n", ordem);
    int A[ordem][ordem], B[ordem][ordem], C[ordem][ordem];

//*********gera a matriz 1*******************

        for( i=0; i<ordem; i++){
            for( j=0; j<ordem; j++){
              A[i][j]=rand()%100;
            }
            printf(" \n ");
        }
//********Imprime Matriz 1*******************

        for( i=0; i<ordem; i++){
            for( j=0; j<ordem; j++){
                printf("%3d ",A[i][j]);
            }
            printf(" \n ");
        }

//*********gera a matriz 2*******************

        for( i=0; i<ordem; i++){
            for( j=0; j<ordem; j++){
              B[i][j]=rand()%100;
            }
            printf(" \n ");
        }
//********Imprime Matriz 2*******************

        for( i=0; i<ordem; i++){
            for( j=0; j<ordem; j++){
                printf(" %3d ",B[i][j]);
            }
            printf(" \n\n ");
        }

//*********Soma das Matrizes********************
        for( i=0; i<ordem; i++){
            for( j=0; j<ordem; j++){
                       C[i][j]= A[i][j] + B[i][j];

                printf(" %3d ",C[i][j]);
            }
            printf(" \n ");
        }

        system("pause");
	return 0;
}
