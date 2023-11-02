#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int v1[16], v2[16];
    int resultado[4][4]; 
    int i = 0, j = 0, k = 0, soma = 0, sub = 0, mult = 0, r1 = 0;
    char operacao[5];

    for(i = 0;i <= 16;i++){
        scanf("%d", &v1[i]);
    }
    
    for(i = 0;i <= 16;i++){
        scanf("%d", &v2[i]);
    }

    scanf("%c", &operacao);

    if(operacao == "soma"){
        for(i = 0;i <= 16;i++){
            soma = v1[i] + v2[i];
            r1 = soma;

            for(j = 0;j <= 16;j++){
                for(k = 0;k <= 16;k++){
                    resultado[j][k] = r1;
                }
            }
        }
        for(j = 0;j <= 16;j++){
            for(k = 0;k <= 16;k++){
                printf("%d ", resultado[j][k]);
            }
        }
    }else if(operacao == "sub"){

    }else if(operacao == "mult"){

    }else{
        printf("Operação não suportada!");
    }

    


    return 0;
}