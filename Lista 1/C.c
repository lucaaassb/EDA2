#include <stdlib.h>
#include <stdio.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

int remove_depois(celula *p){
    celula *lixo = p->prox;
    if (lixo == NULL){
        int x = lixo->dado;
        p->prox = lixo->prox;
        free(lixo);
        return x;
    }
    

void remove_elemento(celula *le, int x){
    celula *lixo = le->prox;

    while (lixo != NULL && lixo->dado != x){ //Percorrer a lista até achar o valor x e vai passando "lixo" para o próximo elemento
        le = lixo;
        lixo = lixo->prox;
    }

    if (lixo != NULL){ //Se o elemento "lixo" for encontrado
        le->prox = lixo->prox;
        free(lixo);
    }
}

void remove_todos_elementos(celula *le, int x){

    while(le != NULL && (le->dado x)){ //Encontrar o primeiro elemento x na lista
        le = le->prox;
    }

    while (le != NULL){
        if (le->dado == x){ //Caso o elemento encontrado seja x, o lixo é removido e a lista atualizada
            lixo -> prox = le->prox;
        } else { //Se não, o lixo se mantém
            lixo = le;
        }
        le = le->prox;
    }
}