#include <stdio.h>

void imprimirUniao(int A[], int tamanhoA, int B[], int tamanhoB) {
    printf("A ∪ B = {");

   
    for (int i = 0; i < tamanhoA; i++) {
        if (i > 0) {
            printf(", ");
        }
        printf("%d", A[i]);
    }

    
    for (int i = 0; i < tamanhoB; i++) {
        int estaEmA = 0;

        
        for (int j = 0; j < tamanhoA; j++) {
            if (B[i] == A[j]) {
                estaEmA = 1;
                break;
            }
        }

        
        if (!estaEmA) {
            printf(", %d", B[i]);
        }
    }

    printf("}\n");
}

int main() {
    int A[] = {7, 2, 5, 8, 4};
    int tamanhoA = sizeof(A) / sizeof(A[0]);

    int B[] = {4, 2, 9, 5};
    int tamanhoB = sizeof(B) / sizeof(B[0]);

    printf("A[] = {7, 2, 5, 8, 4} e B[] = {4, 2, 9, 5}\n");
    imprimirUniao(A, tamanhoA, B, tamanhoB);

    int C[] = {3, 9, 11};
    int tamanhoC = sizeof(C) / sizeof(C[0]);

    int D[] = {2, 6, 1};
    int tamanhoD = sizeof(D) / sizeof(D[0]);

    printf("A[] = {3, 9, 11} e B[] = {2, 6, 1}\n");
    imprimirUniao(C, tamanhoC, D, tamanhoD);

    return 0;
}