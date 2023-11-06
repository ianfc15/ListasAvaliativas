#include <stdio.h>
#include <string.h>

int main() {
    char nomeTime1[31], nomeTime2[31];
    int forcaTime1 = 0, forcaTime2 = 0;
    
    // Leitura dos dados do time 1
    scanf("%s", nomeTime1);
    for (int i = 0; i < 11; i++) {
        char nome[31], posicao;
        int forca;
        scanf("%s;%c;%d", nome, &posicao, &forca);
        if (posicao == 'G') {
            forcaTime1 += 8 * forca;
        } else if (posicao == 'L') {
            forcaTime1 += 10 * forca;
        } else if (posicao == 'Z') {
            forcaTime1 += 5 * forca;
        } else if (posicao == 'V') {
            forcaTime1 += 8 * forca;
        } else if (posicao == 'M') {
            forcaTime1 += 11 * forca;
        } else if (posicao == 'A') {
            forcaTime1 += 12 * forca;
        }
    }
    
    // Leitura dos dados do time 2
    scanf("%s", nomeTime2);
    for (int i = 0; i < 11; i++) {
        char nome[31], posicao;
        int forca;
        scanf("%s;%c;%d", nome, &posicao, &forca);
        if (posicao == 'G') {
            forcaTime2 += 8 * forca;
        } else if (posicao == 'L') {
            forcaTime2 += 10 * forca;
        } else if (posicao == 'Z') {
            forcaTime2 += 5 * forca;
        } else if (posicao == 'V') {
            forcaTime2 += 8 * forca;
        } else if (posicao == 'M') {
            forcaTime2 += 11 * forca;
        } else if (posicao == 'A') {
            forcaTime2 += 12 * forca;
        }
    }
    
    // Cálculo das forças ponderadas
    float forcaPonderadaTime1 = (float)forcaTime1 / 100;
    float forcaPonderadaTime2 = (float)forcaTime2 / 100;
    
    // Saída
    printf("%s: %.2f de forca\n", nomeTime1, forcaPonderadaTime1);
    printf("%s: %.2f de forca\n", nomeTime2, forcaPonderadaTime2);
    
    if (forcaPonderadaTime1 > forcaPonderadaTime2) {
        printf("%s eh mais forte\n", nomeTime1);
    } else if (forcaPonderadaTime2 > forcaPonderadaTime1) {
        printf("%s eh mais forte\n", nomeTime2);
    } else {
        printf("Os times tem a mesma forca\n");
    }
    
    return 0;
}