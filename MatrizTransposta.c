/*Escreva um programa que gere uma matriz aleatória; apresente-a na tela; calcule sua
transposta e a apresente na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int h=time(NULL);
    srand(h);
    int i,j;
    int nc=rand()%10;
    int nl=rand()%10;


    printf(" Número de linhas: %d \t Colunas: %d \n\n", nl, nc);

//############ Matriz######################################################################
    int matriz[nl][nc];

//################### Gera a Matriz #######################################################
    for(i= 0 ; i < nl; i++ )
    {
        for(j= 0 ; j < nc; j++ )
        {
            matriz[i][j]= rand()%100;
        }
    }
//  ##########  Imprime a Matriz    #########################################################
    printf(" Matriz: \n\n");
    for(i= 0 ; i < nl; i++ )
    {
        for(j= 0 ; j < nc; j++ )
        {
            printf("%3d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf(" \n\n");

//  ##########  Imprime a Matriz Transposta #################################################
    printf(" Matriz Transposta: \n\n");
    for(i= 0 ; i < nc; i++ )
    {
        for(j= 0 ; j < nl; j++ )
        {
            printf("%3d ",matriz[j][i]);
        }
        printf("\n");
    }
    printf(" \n\n");

    system("pause");
    return 0;
}
