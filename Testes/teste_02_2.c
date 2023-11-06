#include <stdio.h>
#include <string.h>

int main() {
    char nomeJogador1[10][30], nomeJogador2[10][30], nomeTime1[30], nomeTime2[30], posicao;
    int nivelForca = 0;
    float forcaTime1 = 0, forcaTime2 = 0;

    fgets(nomeTime1, 30, stdin);

    for (int i = 0; i < 11; i++) {
        scanf("%29[^;];%c;%d", nomeJogador1[i], &posicao, &nivelForca);
        switch (posicao) {
            case 'G':
                forcaTime1 += 8 * nivelForca;
                break;
            case 'L':
                forcaTime1 += 10 * nivelForca;
                break;
            case 'Z':
                forcaTime1 += 5 * nivelForca;
                break;
            case 'V':
                forcaTime1 += 8 * nivelForca;
                break;
            case 'M':
                forcaTime1 += 11 * nivelForca;
                break;
            case 'A':
                forcaTime1 += 12 * nivelForca;
                break;
        }
    }

    forcaTime1 = forcaTime1 / 100;

    fgets(nomeTime2, 30, stdin);

    for (int i = 0; i < 11; i++) {
        scanf("%29[^;];%c;%d", nomeJogador2[i], &posicao, &nivelForca);
        switch (posicao) {
            case 'G':
                forcaTime2 += 8 * nivelForca;
                break;
            case 'L':
                forcaTime2 += 10 * nivelForca;
                break;
            case 'Z':
                forcaTime2 += 5 * nivelForca;
                break;
            case 'V':
                forcaTime2 += 8 * nivelForca;
                break;
            case 'M':
                forcaTime2 += 11 * nivelForca;
                break;
            case 'A':
                forcaTime2 += 12 * nivelForca;
                break;
        }
    }

    forcaTime2 = forcaTime2 / 100;

    printf("%s: %.2f de forca\n", nomeTime1, forcaTime1);
    printf("%s: %.2f de forca\n", nomeTime2, forcaTime2);

    if (forcaTime1 > forcaTime2) {
        printf("%s eh mais forte\n", nomeTime1);
    } else if (forcaTime1 < forcaTime2) {
        printf("%s eh mais forte\n", nomeTime2);
    } else {
        printf("Os times tem a mesma forca\n");
    }

    return 0;
}