#include <stdio.h>

int busca_ultimo(int v[], int n, int e) {
    int ultimoIndice = -1;

    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            ultimoIndice = i; 
        }
    }

    return ultimoIndice; 
}

int main() {
    int vetor[] = {4, 9, 10, 8, 6};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int elemento = 8;

    int ultimoIndice = busca_ultimo(vetor, tamanho, elemento);

    if (ultimoIndice != -1) {
        printf("A última ocorrência do elemento %d está no índice %d do vetor.\n", elemento, ultimoIndice);
    } else {
        printf("O elemento %d não foi encontrado no vetor.\n", elemento);
    }

    return 0;
}