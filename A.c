#include <stdio.h>
#include <stdlib.h>

//========================================================//

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

//========================================================//

int main()
{
    int n, i, x;
    celula *lista, *nova, *p;
    printf("Digite o tamanho da lista: ");
    scanf("%d", &n);
    lista = NULL;
    for (i = 0; i < n; i++)
    {
        nova = malloc(sizeof(celula));
        printf("Digite o valor do elemento %d: ", i + 1);
        scanf("%d", &x);
        nova->dado = x;
        nova->prox = lista;
        lista = nova;
    }
    printf("Lista: ");
    for (p = lista; p != NULL; p = p->prox)
        printf("%d ", p->dado);
    printf("\n");
    return 0;
}

//========================================================//

void imprime(celula *le)
{
    celula *p;
    for (p = le; p != NULL; p = p->prox)
        printf("%d\n", p->dado);
}

//========================================================//

void imprime_rec(celula *le)
{
    if (le != NULL)
    {
        printf("%d\n", le->dado);
        imprime(le->prox);
    }
}
