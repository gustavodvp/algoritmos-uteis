#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 4

// Funcao recursiva para somar os numeros de um vetor de inteiros

int somaVetor(int vetor[], int num){
	int i, soma;
	if(i>TAM)
		return 0;
	
	for(i=0; i< TAM ; i++)
		soma+=vetor[i];
		
	return soma;
	
}


	
int main (void){
	
	setlocale(LC_ALL, "Portuguese");
	// 1 3 5 7 
	
	int vetor[TAM], i;
	int soma = 0;
	int n, num;
	

	printf("Digite os numeros para somar: \n");
	for(n=0; n<4; n++){
		scanf("%d", &num);
	}
	somaVetor(vetor, num);
	
	printf("A soma dos numeros é: %d\n", soma);
	
	
	return 0;
}
