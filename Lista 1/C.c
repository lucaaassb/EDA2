#include <stdlib.h>
#include <stdio.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

int remove_depois(celula *p){
    celula *lixo;
    int x;
    if (p->prox == NULL){
        printf("Erro: lista vazia ou posicao invalida\n");
        exit(1);
    }
    lixo = p->prox;
    x = lixo->dado;
    p->prox = lixo->prox;
    free(lixo);
    return x;
}

void remove_elemento(celula *le, int x){
    celula *p, *lixo;
    for (p = le; p->prox != NULL; p = p->prox){
        if (p->prox->dado == x){
            lixo = p->prox;
            p->prox = lixo->prox;
            free(lixo);
            return;
        }
    }
    printf("Elemento %d nao encontrado\n", x);
}

void remove_todos_elementos(celula *le, int x){
    celula *p, *lixo;
    for (p = le; p->prox != NULL; p = p->prox){
        while (p->prox != NULL && p->prox->dado == x){
            lixo = p->prox;
            p->prox = lixo->prox;
            free(lixo);
        }
    }
}