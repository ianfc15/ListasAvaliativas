    #include <stdio.h>
    #include <math.h>
    #include <stdlib.h>

    int main(){
        int n[10], n1[10];
        int i = 0, j = 0, k = 0, soma = 0;

        for(i = 0; i <= 9; i++){
            scanf("%d", &n[i]);
        }

        for(i = 0; i <= 9; i++){
            printf("%d ", n[i]);
        }
        printf("\n");

        // Parte da repeticao

        int tamanhoConjunto = 0;

        int a = 8;
        for(i = 0; i <= 9; i++){
            for(j = 0; j <= a; j++){
                soma = n[j] + n[j + 1];
                n[j] = soma;
                printf("%d", n[j]);
            }
            printf("\n");
            a--;     
        }

        return 0;
    }
