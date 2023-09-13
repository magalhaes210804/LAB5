#include <stdio.h>

int contarValoresDiferentes(int vetor[], int n) {
    if (n <= 0) {
        return 0;
    }

    int contador = 1; 

    for (int i = 1; i < n; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (vetor[i] == vetor[j]) {
                break;
            }
        }
        if (i == j) {
            contador++; 
        }
    }

    return contador;
}

int main() {
    int vetor[] = {4, 9, 10, 8, 6, 4, 10, 9};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int qtdeDiferentes = contarValoresDiferentes(vetor, tamanho);

    printf("Quantidade de valores diferentes: %d\n", qtdeDiferentes);

    return 0;
}