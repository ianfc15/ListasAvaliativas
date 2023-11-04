#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int v1[4][4], v2[4][4];
    int result[4][4], r1;
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
        for(j = 0; j <= 3; j++){
            for(k = 0; k <= 3; k++){
                for(i = 0; i <= 15; i++){
                    soma = v1[i] + v2[i];
                    result[j][k] = soma;
                }
            }
        }

        for(j = 0; j <= 3; j++){
            for(k = 0; k <= 3; k++){
                printf("%3d", result[j][k]);
            }
            printf("\n");
        }
    }else if(strcmp (operacao,"mult") == 0){
        for(j = 0; j <= 3; j++){
            for(k = 0; k <= 3; k++){
                for(i = 0; i <= 15; i++){
                    mult = v1[i] * v2[i];
                    result[j][k] = mult;
                }
            }
        }

        for(j = 0; j <= 3; j++){
            for(k = 0; k <= 3; k++){
                printf("%3d", result[j][k]);
            }
            printf("\n");
        }
    }else if(strcmp (operacao,"sub") == 0){
        for(j = 0; j <= 3; j++){
            for(k = 0; k <= 3; k++){
                for(i = 0; i <= 15; i++){
                sub = v1[i] - v2[i];
                result[j][k] = sub;
                }   
            }
        }

        for(j = 0; j <= 3; j++){
            for(k = 0; k <= 3; k++){
                printf("%3d", result[j][k]);
            }
            printf("\n");
        }
    }else{
        printf("\n Operacao nao suportada");
    }
    
    return 0;
}