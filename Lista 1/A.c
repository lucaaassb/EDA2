#include <stdio.h>
#include <stdlib.h>

//========================================================//

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

//========================================================//

//========================================================//

void imprime(celula *le){
    celula *p;
    for(p = le->prox; p != NULL; p = p->prox){
        printf("%d ", p->dado);
    }
    // for (p = le; p != NULL; p = p->prox)
    //     printf("%d\n", p->dado);
    printf("NULL");
}

//========================================================//

void imprime_rec(celula *le){
    if (le != NULL){
        printf("%d\n", le->prox->dado);
        imprime_rec(le->prox);
    } else {
        printf("NULL");
    }

    // if (le != NULL){
    //     printf("%d\n", le->dado);
    //     imprime(le->prox);
    // }
}
