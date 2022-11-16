#include <stdio.h>
#include <stdlib.h>

//========================================================//

#define SWAP(a, b) \
    int t = a;     \
    a = b;         \
    b = t;

//========================================================//

void sort(int *v, int size){
    int i, j;
    for (i = 0; i < size; i++){
        for (j = i + 1; j < size; j++){
            if (v[i] > v[j]){
                SWAP(v[i], v[j]);
            }
        }
    }
}

int main (){
    int v[1001], size;
    for (size = 0; scanf("%d", &v[size]) != EOF; size++);
    sort(v, size);
    for (int i = 0; i < size; i++){
        printf("%d%c", v[i], i == size - 1 ? '\n' : ' ');
    }
    return 0;
}

//AJUSTAR O TAMANHO DO VETOR