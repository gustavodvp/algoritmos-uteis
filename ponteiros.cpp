#include <stdio.h>
#include <stdlib.h>


int main (void){
	
	int x, y;
	int *p, *q;
	
	printf("Digite valores para a variavel x: \n");
	scanf("%d", &x);
	
	printf("Digite valores para variavel y: \n", &y);
	scanf("%d", &y);
	
	printf("Mostrando endereço de memoria em hexadecimal de X: %p\n", &x);
	printf("Mostrando endereço de memoria em binario de X....: %d\n", &x);
	printf("Mostrando endereço de memoria em hexadecimal de Y: %p\n", &y);
	printf("Mostrando endereço de memoria em binario de Y....: %d\n", &y);
	printf("Mostrando valor da variavel X....................: %d\n", x);
	printf("Mostrando valor da variavel Y....................: %d\n", y);
	
	
	return 0;
}
