#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nomeTime[2][50], nomeJogador[11][50], posicao[11][1];
    int forcaJogador[11][2];
    int i = 0, j = 0, k = 0;

    for(i = 0; i <= 1; i++){
        fgets(nomeTime[i], 50, stdin) ;
        for(j = 0; j <= 10; j++){
            fgets(nomeJogador[j], 30, stdin);
            fgets(posicao[j], 1, stdin);
            fgets(forcaJogador[j], 2, stdin);
            //scanf("%d", forcaJogador[j]);
        }
        
        for(k = 0; k <= 1; k++){
            fputs(nomeTime[k], stdout);
            for(j = 0; j <= 10; j++){
                //printf("\n");
                fputs(nomeJogador[j], stdout);
                fputs(posicao[j], stdout);
                fputs(forcaJogador[j], stdout);
                //fprintf("%d",forcaJogador[j]);
            }
        }
    }

    printf("\n \n");
    printf("%s", posicao[1]);

    return 0;
}
