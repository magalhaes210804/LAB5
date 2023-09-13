#include <stdio.h>

int busca_qtde(int v[], int n, int e) {
    int contador = 0; 

    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            contador++; 
        }
    }

    return contador; 
}

int main() {
    int vetor[] = {4, 9, 10, 8, 6, 4};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int elemento = 4;

    int quantidade = busca_qtde(vetor, tamanho, elemento);

    printf("O elemento %d aparece %d vezes no vetor.\n", elemento, quantidade);

    return 0;
}