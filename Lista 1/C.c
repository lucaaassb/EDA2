#include <stdlib.h>
#include <stdio.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

int remove_depois(celula *p){
    celula *lixo = p->prox;
    if (lixo != NULL){
        p->prox = lixo->prox;
        free(lixo);
        return 1;
    } else {
        return 0;
    }
}

void remove_elemento(celula *le, int x){
    celula *lixo = le->prox;

    while (lixo != NULL && lixo->dado != x){
        lixo = lixo->prox;
    }
    if(lixo != NULL){
        le->prox = lixo->prox;
        free(lixo);
    }
}

void remove_todos_elementos(celula *le, int x){
    while (le->prox != NULL && le->prox->dado == x){
        remove_depois(le);
    }

    celula *lixo = le->prox;
    while (lixo != NULL){
        if (lixo->prox != NULL && lixo->prox->dado == x){
            remove_depois(lixo);
        } else {
            lixo = lixo->prox;
        }
    }
}