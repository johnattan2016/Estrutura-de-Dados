/*Escreva um programa que recebe uma matriz do usuario e a identifique:
 matriz nula
 matriz linha
 matriz coluna
 matriz quadrada
 matriz diagonal
 matriz identidade
 matriz simetrica

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){

	int i,nc,nl,s=0;
    int h=time(NULL); //chama a library time.h
    srand(h);
    int j;
	int nccount=0;
	int nccount2=0;

	setlocale(LC_ALL, "Portuguese");
	//printf("\n");

	printf("Digite quantas linhas terá essa matriz\n");
		scanf("%d", &nl);

	printf("Digite quantas colunas terá essa matriz\n");
		scanf("%d", &nc);

	//matriz
	int array[nl][nc];


	//gera a matriz
	for(i= 0 ;i < nl; i++ ){
		for(j= 0 ;j < nc; j++ ){
			printf("Digite um número\n");
				scanf("%d", &array[i][j]);
		}
		printf("\n");
	}

	//imprime a matriz
	for(i= 0 ;i < nl; i++ ){
		for(j= 0 ;j < nc; j++ ){
			printf("%3d ",array[i][j]);
		}
		printf("\n");
	}



	//contabiliza o array todo
	for(j=0;j<nc;j++){
		for(i=0;i<nl;i++){
			s += array[i][j];
//			printf("S = %d \t i = %d  j = %d \t array[i][j] = %d\n", s, i, j, array[i][j]);	 //fast debug
		}
	}

	//matriz nula
	if(s==0){
		printf("Matriz nula\n");
	}

	//matriz coluna
	if(nc==1){
		printf("Matriz coluna\n");
	}

	//matriz linha
	if(nl==1){
		printf("Matriz linha\n");
	}

	//matriz quadrada
	if(nl==nc){
		printf("Matriz quadrada\n");
			//matriz identidade
	        for(i= 0 ;i < nl; i++ ){
		      for(j= 0 ;j < nc; j++ ){
			     if((array[i][j]==array[j][i])&&(array[i][j]==1)){
			         s+=array[i][j];
			         }
		      }
		         if(nc==s){
			         printf("Matriz identidade\n");
		              }
	           }

	       //matriz diagonal
	       for(i= 0 ;i < nl; i++ ){
		      for(j= 0 ;j < nc; j++ ){
			     if((array[i][j]!=0)&&(array[i][j]!=1)&&(array[i][j]==0)&&(array[j][i]==0)){
				        nccount++;
			     }
		      }
		      if(nc==nccount){
			     printf("Matriz diagonal\n");
		      }
	       }

	       //matriz simetrica
	       nccount=0;
	       for(i= 0 ;i < nl; i++ ){
		      for(j= 0 ;j < nc; j++ ){
                    array[i][j];
			     if(array[i][j]==array[j][i]){
			         nccount++;
			     }
		      }
	}
	if(nccount==nl*nc){
        printf("Matriz simetrica\n");
        }
	}

		system("pause");
	return 0;
}

