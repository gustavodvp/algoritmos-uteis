#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// sequencia de fibonacci

int fibonacci(int termo){
	
	if(termo==0)
		return 0;
		
	if(termo==1)
		return 1;
	
	return fibonacci(termo - 1) + fibonacci(termo - 2);
}
	
int main (void){
	
	int i, termo;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o termo da sequencia de fibonacci: \n");
	scanf("%d", &termo);
	
	for(i=0; i<termo; i++){
		printf("%d ", fibonacci(i + 1));
	}
	
	return 0;
}
