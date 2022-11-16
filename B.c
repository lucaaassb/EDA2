#include <stdio.h>
#include <stdlib.h>

//========================================================//

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

//========================================================//

void insere_inicio(celula *le, int x){
    celula *nova;
    nova = malloc(sizeof(celula));
    nova->dado = x;
    nova->prox = le->prox;
    le->prox = nova;
}


//========================================================//

void insere_antes(celula *le, int x, int y){
    celula *nova, *p;
    nova = malloc(sizeof(celula));
    nova->dado = x;
    for (p = le; p->prox != NULL; p = p->prox){
        if (p->prox->dado == y){
            nova->prox = p->prox;
            p->prox = nova;
            return;
        }
    }
    printf("Elemento %d nao encontrado\n", y);
}
