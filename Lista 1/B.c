#include <stdio.h>
#include <stdlib.h>

//========================================================//

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

//========================================================//

void insere_inicio(celula *le, int x){

    celula *nova;
    nova = malloc(sizeof(celula)); //Alocar memória para a nova célula
    nova -> dado = x; //Salvar o valor x na nova célula
    nova -> prox = le -> prox; //Plugar a nova célula na lista
    le -> prox = nova; //Plugar a nova célula na lista
}


//========================================================//

void insere_antes(celula *le, int x, int y){

    celula *nova, *p; 
    nova = malloc(sizeof(celula)); //Alocar memória para a nova célula
    nova -> dado = x; //Salvar o valor x na nova célula
    p = le; //Ponteiro p aponta para o início da lista

    while (p -> prox != NULL && p -> prox -> dado != y){ //Percorrer a lista até achar o valor y
        p = p -> prox;
    }   

    nova->prox = p -> prox; //Plugar a nova célula na lista
    p -> prox = nova; //Plugar a nova célula na lista
}
