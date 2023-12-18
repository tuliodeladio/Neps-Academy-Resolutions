#include <iostream>

using namespace std;

typedef struct X {
    int dado;               // item de informação
    struct X *proximo;      // referência para a próxima célula
} Celula;

Celula* criar_celula(int v, Celula *p) 
{
    Celula *novo = (Celula*) malloc(sizeof(Celula));
    if (novo == NULL)
        return NULL;

    novo->dado = v;
    novo->proximo = p;

    return novo;
}

typedef struct {

    Celula *primeiro;
    Celula *ultimo;
    int cont;

} LinkedList;

int tamanho(LinkedList *list) 
{
    return (list == NULL) ? 0 : list->cont;
}

LinkedList* criar_lista()
{
    LinkedList *x = (LinkedList*) malloc(sizeof(LinkedList));
    x->primeiro = x->ultimo = NULL;
    x->cont = 0;
    return x;
}

int estah_vazia(LinkedList *list) 
{
    return (tamanho(list) == 0);
}

int inserir(LinkedList *list, int item)
{    
    Celula *novo = criar_celula(item, NULL);
    if (novo == NULL)
        return 0;

    if (estah_vazia(list))
        list->primeiro = list->ultimo = novo;
    else
    {
        list->ultimo->proximo = novo;
        list->ultimo = novo;
    }

    list->cont++;

    return 1;
}


void imprimir_lista(LinkedList *list) {
    if (estah_vazia(list) == 0) {
        Celula *x = list->primeiro;
        while(x != NULL)
        {
            printf("%d\n", x->dado);
            x = x->proximo;
        }
    }
}


int main(){
	LinkedList *list = criar_lista();

	int in = 1;

	while (in != 0)
	{
		cin >> in;
		inserir(list, in);
	}

	int tama = tamanho(list);

	int nu[tama];

	Celula *x = list->primeiro;

	for (int i = 0; i < tama; i++){
		nu[i] = x->dado;
		x = x->proximo;
	}

	for (int i = 0; i < tama; i++) {
        for (int j = 0; j < tama; j++) {
            if (nu[i] < nu[j]) {
                int aux = nu[i];
                nu[i] = nu[j];
                nu[j] = aux;
            }
            
        }
    }

	cout << nu[tama-1];
	
	
		

    return 0;
}
