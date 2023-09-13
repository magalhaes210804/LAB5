#include <stdio.h>

int busca_primeiro(int v[], int n, int e) {
    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            return i; 
        }
    }
    
    return -1; 
}

int main() {
    int vetor[] = {4, 9, 10, 8, 6};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int elemento = 8;

    int indice = busca_primeiro(vetor, tamanho, elemento);

    if (indice != -1) {
        printf("O elemento %d está no índice %d do vetor.\n", elemento, indice);
    } else {
        printf("O elemento %d não está no vetor.\n", elemento);
    }

    return 0;
}