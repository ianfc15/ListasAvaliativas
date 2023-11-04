#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int v1[16], v2[16];
    int resultado[4][4], r1;
    int i = 0, j = 0, k = 0, soma = 0, sub = 0, mult = 0, t = 0;
    char operacao[10];

    for(i = 0; i <= 15; i++){
        scanf("%d", &v1[i]);
    }
    for(i = 0; i <= 15; i++){
        scanf("%d", &v2[i]);
    }

    scanf("%s", &operacao);

    if(strcmp (operacao,"soma") == 0){
        for(i = 0; i <= 15; i++){
            soma = v1[i] + v2[i];
            r1 = soma;
        }

        for(j = 0; j <= 3; j++){
            for(k = 0; k <= 3; k++){
                resultado[j][k] = r1;
            }
        }

        for(j = 0; j <= 3; j++){
            for(k = 0; k <= 3; k++){
                printf("%3d", resultado[j][k]);
            }
            printf("\n");
        }
    }else if(strcmp (operacao,"mult") == 0){
        for(i = 0; i <= 15; i++){
            mult = v1[i] * v2[i];
            r1 = mult;
        }

        for(j = 0; j <= 3; j++){
            for(k = 0; k <= 3; k++){
                resultado[j][k] = r1;
            }
        }

        for(j = 0; j <= 3; j++){
            for(k = 0; k <= 3; k++){
                printf("%3d", resultado[j][k]);
            }
            printf("\n");
        }
    }else if(strcmp (operacao,"sub") == 0){
        for(i = 0; i <= 15; i++){
            sub = v1[i] - v2[i];
            r1 = sub;
        }

        for(j = 0; j <= 3; j++){
            for(k = 0; k <= 3; k++){
                resultado[j][k] = r1;
            }
        }

        for(j = 0; j <= 3; j++){
            for(k = 0; k <= 3; k++){
                printf("%3d", resultado[j][k]);
            }
            printf("\n");
        }
    }else{
        printf("\n Operacao nao suportada");
    }
    
    return 0;
}