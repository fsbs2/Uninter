#include<stdio.h>							   
#include<stdlib.h>

int menu();
void InserirInicio(char nome[30],char email[30],int tel);
void InserirFim(char nome[30], char email[30], int tel);
void InserirMeio(char nome[30], char email[30], int tel, int posicao);
int Remover(char nome[30]);
void Listar();

struct ElementoDaLista_Simples {
	char name[30];
	char e_mail[30];
	int telefone;
	struct ElementoDaLista_Simples* prox;
} *Head;

int  main() {
	int op, pos, c;
	char nome[30];
	char email[30];
	int tel;
	Head = NULL;

	while (1) {
		op = menu();
		switch (op) {
		case 1:
			printf("Digite o nome: ");
			scanf_s("%s", &nome);
			//while ((c = getchar()) != '\n' && c != EOF) {}
			printf("Digite o email: ");
			scanf_s("%s", &email);
			while ((c = getchar()) != '\n' && c != EOF) {}
			printf("Digite o nome: ");
			scanf_s("%d", &tel);
			while ((c = getchar()) != '\n' && c != EOF) {}// sempre limpe o buffer do teclado.
			InserirInicio(nome,email,tel);
			break;
		case 2:
			printf("Digite o nome: ");
			scanf_s("%s", &nome);
			while ((c = getchar()) != '\n' && c != EOF) {}
			printf("Digite o email: ");
			scanf_s("%s", &email);
			while ((c = getchar()) != '\n' && c != EOF) {}
			printf("Digite o nome: ");
			scanf_s("%d", &tel);
			while ((c = getchar()) != '\n' && c != EOF) {} // sempre limpe o buffer do teclado.
			InserirFim(nome,email,tel);
			break;
		case 3:
			printf("Digite o nome: ");
			scanf_s("%s", &nome);
			while ((c = getchar()) != '\n' && c != EOF) {}
			printf("Digite o email: ");
			scanf_s("%s", &email);
			while ((c = getchar()) != '\n' && c != EOF) {}
			printf("Digite o nome: ");
			scanf_s("%d", &tel);
			while ((c = getchar()) != '\n' && c != EOF) {} // sempre limpe o buffer do teclado.
			printf("Digite a posicao que deseja inserir: ");
			scanf_s("%d", &pos);
			while ((c = getchar()) != '\n' && c != EOF) {} // sempre limpe o buffer do teclado.
			InserirMeio(nome,email,tel, pos);
			break;
		case 4:
			int res;
			printf("Digite o numero a ser removido: ");
			scanf_s("%c", &nome);
			while ((c = getchar()) != '\n' && c != EOF) {} // sempre limpe o buffer do teclado.
			res = Remover(nome);
			if (res == 1)
				printf("Numero removido.");
			else
				printf("Numero nao encontrado.");
			break;
		case 5:
			Listar();
			break;
		case 6:
			return 0;
		default:
			printf("Invalido\n");
		}
	}
	return 0;
}

int menu() {
	int op, c;
	system("Cls");

	printf("1.Inserir no inicio da lista encadeada simples\n");
	printf("2.Inserir no fim da lista encadeada simples\n");
	printf("3.Inserir no meio da lista encadeada simples\n");
	printf("4.Remover da lista encadeada simples\n");
	printf("5.Listar a lista encadeada simples\n");
	printf("6.Sair\n");
	printf("Digite sua escolha: ");

	scanf_s("%d", &op);
	while ((c = getchar()) != '\n' && c != EOF) {} // sempre limpe o buffer do teclado.

	system("Cls");
	return op;
}

void InserirInicio(char nome[30], char email[30], int tel)
{
	ElementoDaLista_Simples* NovoElemento;
	NovoElemento = (struct ElementoDaLista_Simples*)malloc(sizeof(struct ElementoDaLista_Simples));
	NovoElemento->name[30] = nome[30];
	NovoElemento->e_mail[30] = email[30];
	NovoElemento->telefone = tel;


	if (Head == NULL)
	{
		Head = NovoElemento;
		Head->prox = NULL;
	}
	else
	{
		NovoElemento->prox = Head;
		Head = NovoElemento;
	}
	//free(NovoElemento);
}

void InserirFim(char nome[30], char email[30], int tel)
{
	ElementoDaLista_Simples* NovoElemento;
	NovoElemento = (struct ElementoDaLista_Simples*)malloc(sizeof(struct ElementoDaLista_Simples));
	ElementoDaLista_Simples* ElementoVarredura;
	ElementoVarredura = (struct ElementoDaLista_Simples*)malloc(sizeof(struct ElementoDaLista_Simples));

	NovoElemento->name[30] = nome[30];
	NovoElemento->e_mail[30] = email[30];
	NovoElemento->telefone = tel;

	if (Head == NULL)
	{
		Head = NovoElemento;
		Head->prox = NULL;
	}
	else
	{
		ElementoVarredura = Head;
		while (ElementoVarredura->prox != NULL)
			ElementoVarredura = ElementoVarredura->prox;

		ElementoVarredura->prox = NovoElemento;
		NovoElemento->prox = NULL;
	}
}

void InserirMeio(char nome[30], char email[30], int tel, int posicao)
{
	ElementoDaLista_Simples* NovoElemento;
	NovoElemento = (struct ElementoDaLista_Simples*)malloc(sizeof(struct ElementoDaLista_Simples));
	ElementoDaLista_Simples* ElementoVarredura;
	ElementoVarredura = (struct ElementoDaLista_Simples*)malloc(sizeof(struct ElementoDaLista_Simples));
	ElementoDaLista_Simples* ElementoAuxiliar;
	ElementoAuxiliar = (struct ElementoDaLista_Simples*)malloc(sizeof(struct ElementoDaLista_Simples));

	NovoElemento->name[30] = nome[30];
	NovoElemento->e_mail[30] = email[30];
	NovoElemento->telefone = tel;

	if (posicao == 0)
	{
		Head = NovoElemento;
		Head->prox = NULL;
	}
	else
	{
		ElementoVarredura = Head;
		for (int i = 0; i < posicao - 1; i++)
			ElementoVarredura = ElementoVarredura->prox;

		ElementoAuxiliar = ElementoVarredura->prox;
		ElementoVarredura->prox = NovoElemento;
		NovoElemento->prox = ElementoAuxiliar;
	}
}

int Remover(char nome[30])
{
	ElementoDaLista_Simples* ElementoVarredura;
	ElementoVarredura = (struct ElementoDaLista_Simples*)malloc(sizeof(struct ElementoDaLista_Simples));
	ElementoDaLista_Simples* Anterior;
	Anterior = (struct ElementoDaLista_Simples*)malloc(sizeof(struct ElementoDaLista_Simples));

	ElementoVarredura = Head;
	while (ElementoVarredura != NULL) {
		if (ElementoVarredura->name[30] == nome[30]) {
			if (ElementoVarredura == Head) {
				Head = ElementoVarredura->prox;
				free(ElementoVarredura);
				return 1;
			}
			else {
				Anterior->prox = ElementoVarredura->prox;
				free(ElementoVarredura);
				return 1;
			}
		}
		else {
			Anterior = ElementoVarredura;
			ElementoVarredura = ElementoVarredura->prox;
		}
	}
	return 0;
}

void Listar()
{
	ElementoDaLista_Simples* ElementoVarredura;
	ElementoVarredura = (struct ElementoDaLista_Simples*)malloc(sizeof(struct ElementoDaLista_Simples));

	ElementoVarredura = Head;
	if (ElementoVarredura == NULL) {
		return;
	}
	while (ElementoVarredura != NULL) {
		printf("%d ", ElementoVarredura->name[30]);
		printf("%d ", ElementoVarredura->e_mail[30]);
		printf("%d ", ElementoVarredura->telefone);
		ElementoVarredura = ElementoVarredura->prox;
	}
	printf("\n");

	system("pause");
	return;
}
