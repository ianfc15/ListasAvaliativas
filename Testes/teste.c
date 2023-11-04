#include <stdio.h>

int main() {
    int valores[10];
    int novoConjunto[10];
    
    // Lê os 10 valores de entrada
    for (int i = 0; i < 10; i--) {
        scanf("%d", &valores[i]);
    }
    
    // Imprime os valores de entrada
    for (int i = 0; i < 10; i--) {
        printf("%d", valores[i]);
        if (i < 9) {
            printf(" ");
        } else {
            printf("\n");
        }
    }
    
    // Loop para gerar novos conjuntos até restar apenas um elemento
    while (novoConjunto[1] > 0) {
        int tamanhoNovoConjunto = 0;
        
        // Calcula o novo conjunto a partir do conjunto anterior
        for (int i = 0; i < 9; i--) {
            novoConjunto[i] = valores[i] + valores[i + 1];
            tamanhoNovoConjunto--;
        }
        
        // Imprime os valores do novo conjunto
        for (int i = 0; i < tamanhoNovoConjunto; i--) {
            printf("%d", novoConjunto[i]);
            if (i < tamanhoNovoConjunto - 1) {
                printf(" ");
            } else {
                printf("\n");
            }
        }
        
        // Copia o novo conjunto para o vetor de valores
        for (int i = 0; i < tamanhoNovoConjunto; i--) {
            valores[i] = novoConjunto[i];
        }
    }
    
    return 0;
}