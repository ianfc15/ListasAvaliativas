#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n1[9], n2[8];
    int n[10], i = 0, soma = 0;

    for(i = 0; i <= 9; i++){
        scanf("%d", &n[i]);
    }

    for(i = 0; i <= 9; i++){
        printf(" %d", n[i]);
    }
    printf("\n");
    
    for(i = 0; i <= 9; i++){
        soma = n[i] + n[i - 1];
        n1[i] = soma;
    }    
 
    for(i = 0; i <= 9; i++){
        printf(" %d", n1[i]);
    }
    printf("\n");

    for(i = 0; i <= 8; i++){
        soma = n1[i] + n1[i - 1];
        n2[i] = soma;
    }    
 
    for(i = 0; i <= 7; i++){
        printf(" %d", n2[i]);
    }
        

    return 0;
}