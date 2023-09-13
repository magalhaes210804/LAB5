#include <stdio.h>

void inverterVetor(int vetor[], int tamanho) {
    int i, temp;
    for (i = 0; i < tamanho / 2; i++) {
        temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
}

int main() {
    int V[5];

    printf("Digite 5 valores para preencher o vetor:\n");

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &V[i]);
    }

    int tamanho = sizeof(V) / sizeof(V[0]);

    inverterVetor(V, tamanho);

    printf("Vetor invertido: [");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", V[i]);
        if (i < tamanho - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}