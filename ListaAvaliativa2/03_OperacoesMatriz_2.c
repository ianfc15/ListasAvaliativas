#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int v1[4][4], v2[4][4];
    int result[4][4];
    int j = 0, k = 0, i = 0;
    char operacao[10];

    for(j = 0; j <= 3; j++){
        for(k = 0; k <= 3; k++){
            scanf("%d", &v1[j][k]);
        }
    }

    for(j = 0; j <= 3; j++){
        for(k = 0; k <= 3; k++){
            scanf("%d", &v2[j][k]);
        }
    }

    scanf("%s", &operacao);

    if(strcmp (operacao,"soma") == 0){
        for(j = 0; j <= 3; j++){
            for(k = 0; k <= 3; k++){
                result[j][k] = v1[j][k] + v2[j][k];
            }
        }

        for(j = 0; j <= 3; j++){
            for(k = 0; k <= 3; k++){
                printf("%4d", result[j][k]);
            }
            printf("\n");
        }
    }else if(strcmp (operacao,"sub") == 0){
        for(j = 0; j <= 3; j++){
            for(k = 0; k <= 3; k++){
                result[j][k] = v1[j][k] - v2[j][k];
            }
        }

        for(j = 0; j <= 3; j++){
            for(k = 0; k <= 3; k++){
                printf("%4d", result[j][k]);
            }
            printf("\n");
        }
    }else if(strcmp (operacao,"mult") == 0){
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                result[i][j] = 0;
                for (int k = 0; k < 4; k++) {
                    result[i][j] += v1[i][k] * v2[k][j];
                }
        }
    }

        for(j = 0; j <= 3; j++){
            for(k = 0; k <= 3; k++){
                printf("%4d", result[j][k]);
            }
            printf("\n");
        }
    }


    return 0;
}