#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	Algoritmo para gerar número aleatorio 
	
*/


int main (void){
	
	int i;
	
	srand(time(NULL));
	
	for(i=0; i<6; i++){
		printf(" | %d | ", rand() % 60);
		
	}
	printf("\n");
	
	for(i=0; i<6; i++){
		printf(" | %d | ", rand() % 60);
		
	}
	
	printf("\n");
	
	for(i=0; i<6; i++){
		printf(" | %d | ", rand() % 60);
		
	}
	printf("\n");
	

	

}
