#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int ma[9][9]={//linha por linha
{0,1,1,1,0,1,0,0,0},
{1,0,0,1,1,1,1,0,0},
{1,0,0,1,0,0,0,0,0},
{1,1,1,0,1,1,1,1,0},
{0,1,0,1,0,1,1,1,0},
{1,1,0,1,1,0,0,0,0},
{0,0,0,1,1,0,0,0,0},
{0,0,0,1,1,0,0,0,0},
{0,0,0,0,0,0,0,0,0},
};

int diagonal_principal();//quantos loops tem na matriz
int numero_arestas();//quantas aresta?
int maior_grau();
int menor_grau();

int main(void){
	setlocale(LC_ALL,"portuguese");
	printf(" Loop(s): %d\n",diagonal_principal());	
	printf(" Aresta(s): %d\n",numero_arestas());
	printf(" Maior grau): %d \n",maior_grau());
	printf(" Menor grau): %d ",menor_grau());
}

int diagonal_principal(){
	int i;
	int loop = 0;
	for (i = 0; i < 9; i++){
		//if(ma[i][i]==1)loop++;
		loop+= ma[i][i];
		
	}
	return loop;
}

int numero_arestas(){
	int arestas =0;
	int i;
	int j;
	for( i = 0; i< 9; i++){
		for( j = 0; j< 9; j++){
			arestas += ma[i][j];
		}
	}
	return arestas/2;
}

int maior_grau(){
	int maior=0;
	int i,j;
	for (i=0; i<9;i++){
		int novo=0;
		for (j=0;j<9;j++){
			novo += ma[i][j];
		}
		if(novo>maior)maior = novo;
	}
	return maior;
}
int menor_grau(){
	int menor=0;
	int i,j;
	for (i=0; i<9;i++){
		int novo=0;
		for (j=0;j<9;j++){
			novo += ma[i][j];
		}
		if(novo<menor)menor = novo;
	}
	return menor;
}
