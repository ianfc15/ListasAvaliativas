#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n1, n2;

    // printf("Digite dois valores:\n");
    scanf("%d\n", &n1);
    scanf("%d", &n2);

    if (n1 == n2){
        printf("Os valores lidos sao iguais.\n");
    }else if(n1 > n2){
        printf("%d eh maior que %d\n", n1, n2);
        if(n1 % n2 == 0){
            printf("%d eh multiplo de %d\n", n1 ,n2);
        }else if(n1 % n2 != 0){
            printf("%d nao eh multiplo de  %d\n", n1 ,n2);
        }        
    }else if(n1 < n2){  
            printf("%d eh maior que %d\n", n2, n1);
        if(n2 % n1 == 0){
            printf("%d eh multiplo de %d\n", n2 ,n1);
        }else if(n2 % n1 != 0){
            printf("%d nao eh multiplo de  %d\n", n2 ,n1);
        }
    }
        
    return 0;
}