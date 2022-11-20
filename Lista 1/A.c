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
    for (p = le; p != NULL; p = p->prox)
        printf("%d\n", p->dado);
}

//========================================================//

void imprime_rec(celula *le){
    if (le != NULL){
        printf("%d\n", le->dado);
        imprime_rec(le->prox);
    }
    // if (le != NULL){
    //     printf("%d\n", le->dado);
    //     imprime(le->prox);
    // }
}
