#include <stdio.h>
#include <conio.h>

// Produtos
struct tProduto {
	int codigo;
	char descricao[20];
	float valor;
};

// No ou Nodo
struct tNo {
	struct tProduto dado;
	struct tNo *prox;
};

int main(void) {
	// Lista Simplesmente Encadeada
	struct tNo *lista=NULL;
	// Outras variaves
	struct tNo *novo, *p;
	int opcao;
	
	do {
		printf("\n*** Menu ***\n");
		printf("1. Incluir\n");
		printf("2. Listar\n");
		printf("0. Sair\n");
		printf("\nDigite sua opcao: ");
		scanf("%d",&opcao);
		switch (opcao) {
			case 1:
				printf("\n*** Inclusao ***\n");
				novo = malloc(sizeof(struct tNo));
				printf("Digite o codigo...: ");
				scanf("%d",&((*novo).dado.codigo));
				printf("Digite a descricao: ");
				fflush(stdin);
				gets((*novo).dado.descricao);
				printf("Digite o valor....: R$ ");
				scanf("%f",&((*novo).dado.valor));
				(*novo).prox = lista;
				lista = novo;
				break;
			case 2:
				printf("\n*** Listagem ***\n");
				printf("COD - DESCRICAO         -  VALOR\n");
				p = lista;
				while (p != NULL) {
					printf("%-5d - %-20s - R$ %.2f\n", (*p).dado.codigo, (*p).dado.descricao, (*p).dado.valor);
					p = (*p).prox;
				}
		}
	} while (opcao != 0);
	// Desalocar a lista
	
	return 0;
}
