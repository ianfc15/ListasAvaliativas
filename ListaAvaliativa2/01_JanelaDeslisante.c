#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n1[10]; n2[10]; n3[10]; n4[10]; n5[10]; n6[10]; n7[10]; n8[10]; n9[10]; n10[10];
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

    for(i = 1; i <= 9; i++){
        printf(" %d", n1[i]);
    }
    printf("\n");

    
    

    return 0;
}