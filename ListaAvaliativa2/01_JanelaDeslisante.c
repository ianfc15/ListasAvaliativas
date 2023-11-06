    #include <stdio.h>
    #include <math.h>
    #include <stdlib.h>

    int main(){
        int n[10], n1[10];
        int i = 0, j = 0, soma = 0;

        for(i = 0; i <= 9; i++){
            scanf("%d", &n[i]);
        }

        for(i = 0; i <= 9; i++){
            printf("%d", n[i]);
            if(i < 9){
                printf(" ");
            }
        }
        printf("\n");

        // Parte da repeticao

        int tamanhoConjunto = 0;

        int a = 8;
        for(i = 8; i >= 0; i--){
            for(j = 0; j <= i; j++){
                printf("%d", n[j] + n[j+1]);
                n[j] = n[j] + n[j + 1];
                if(j < i){
                    printf(" ");
                }              
            }
            printf("\n");    
        }

        return 0;
    }
