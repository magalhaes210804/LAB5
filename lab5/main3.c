#include <stdio.h>
#include <stdbool.h>

bool contem(int v[], int n, int e) {
    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            return true; 
        }
    }
    
    return false;
}

int main() {
    int vetor[] = {4, 9, 10, 8, 6};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int elemento = 8;

    if (contem(vetor, tamanho, elemento)) {
        printf("O elemento %d está no vetor.\n", elemento);
    } else {
        printf("O elemento %d não está no vetor.\n", elemento);
    }

    return 0;
}