/*Escreva um programa que gere uma matriz quadrada;
apresente-a na tela; calcule e apresente na tela o determin-
ante desta matriz.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int det_matriz(int ordem, int matriz[ordem][ordem])
{
    int det;
    if(ordem==1)
    {
        det=matriz[0][0];
        return det;
    }
    else
    {
        for(int i=0; i<ordem; i++)
        {
            for( int j=0; j<ordem; j++)
            {
                //det_matriz();


            }

        }
    }

}
main()
{
    int h=time(NULL);
    srand(h);
    int ordem=rand()%10;
    int i, j;
    int matriz[ordem][ordem];

    printf(" Ordem dessa Matriz: %d \n", ordem);

    for(i=0; i<ordem; i++)
    {
        for(j=0; j<ordem; j++)
        {
            matriz[i][j]=rand()%100;
        }
        printf(" \n ");
    }
    for(i=0; i<ordem; i++)
    {
        for(j=0; j<ordem; j++)
        {
            printf(" %3d ",matriz[i][j]);
        }
        printf(" \n ");
    }


    system("pause");
}




//############ Nova Matriz ###################################

int[][] nova_matriz(int ordem, int a, int b, int matriz_original[ordem][ordem])
{
    int novamatriz[ordem - 1][ordem - 1];
    for(i=0; i<ordem-1; i++)
    {
        for(j=0; j<ordem-1; j++)
        {
            if((i<a)&&(j<b){
            novamatriz[i][j] = matriz_original;
            }
            else if((i<a)&&(j>=b){
                    novamatriz[i][j] = matriz_original;
            }
            else if((i>a)&&(j<b)){
                novamatriz[i+1][j] = matriz_original;
            }
            else if((i>=a)&&(j<=b)){
                novamatriz[i+1][j+1] = matriz_original;
            }


        }
//        printf(" \n ");
    }
    return novamatriz;
}
//############
for(i=0; i<ordem; i++)
{
    det=det+matriz[0][1]*pow(-1, 0+1)*nova_matriz();
}













