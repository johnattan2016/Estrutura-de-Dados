/*Escreva um programa que gere duas matriz aleatória tal
que a quantidade de colunas de uma seja igual a quantidade
de linhas da segunda; apresente-as na tela; calcule a
primeira
multiplicada pela segunda; Apresente o resultado na tela.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
    int h=time(NULL);
    srand(h);
    int l= rand()%5,c=rand()%5,lc=rand()%5,i,j;
    int matriz1 [l][c];
    int matriz2[l][c];

    printf("numero de linhas: %d \n",l);
    printf("numero de colunas: %d \n",c);
    printf("numero de colunas: %d \n",lc);

    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            matriz1[i][j]=rand()%10;
        }
        printf(" \n ");

    }
    for(i=0;i<l;i++){
        for(j=0;j<lc;j++){
            matriz2[i][j]=rand ()%10;

        }
        printf(" \n ");
    }
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf(" %d",matriz1[i][j]);

        }
        printf(" \n ");

    }
    printf(" \n\n ");
    for(i=0;i<l;i++){
        for(j=0;j<lc;j++){
            printf(" %d",matriz2[i][j]);

        }
        printf(" \n ");
    }

    system("pause");
}
