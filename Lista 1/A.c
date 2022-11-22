#include <stdio.h>

//========================================================//

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

//========================================================//

//========================================================//

void imprime(celula *le){
    for(celula *p = le->prox; p != NULL; p = p->prox){
        printf("%d -> ", p->dado);
    }
    printf("NULL");
}

//========================================================//

void imprime_rec(celula *le){
    if (le -> prox == NULL){
        printf("NULL");
    } else {
        celula *p = le->prox;
        printf("%d -> ", p->dado);
        imprime_rec(p);
    }
}
