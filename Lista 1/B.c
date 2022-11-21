#include <stdio.h>
#include <stdlib.h>

//========================================================//

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

//========================================================//

void insere_inicio(celula *le, int x){
    celula *nova = malloc(sizeof(celula)); //Alocar memória para a nova célula
    nova->dado = x; //Salvar o valor x na nova célula
    nova->prox = le->prox; //Plugar a nova célula na lista
    le->prox = nova; //Plugar a nova célula na lista
}


//========================================================//

void insere_antes(celula *le, int x, int y){
    celula *nova = malloc(sizeof(celula)); //Alocar memória para a nova célula
    nova->dado = x; //Salvar o valor x na nova célula
    celula *p = le->prox; //Ponteiro auxiliar para percorrer a lista
    while (p!=NULL && p->prox->dado != y){ //Percorrer a lista até achar o valor y
        le = p;
        p = p->prox;
    }   

    nova->prox = p; //Plugar a nova célula na lista
    le->prox = nova; //Plugar a nova célula na lista
}
