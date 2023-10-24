#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n[10], n1[9], n2[8];
    int i = 0, soma = 0, b = 0;

    for(i = 0; i <= 9; i++){
        scanf("%d", &n[i]);
    }

    for(i = 0; i <= 9; i++){
        printf(" %d", n[i]);
    }
    printf("\n");

    // parte dois

    
    for(i = 0; i <= 9; i++){
        soma = n[i] + n[i - 1];
        n1[i] = soma;
    }    

    for(i = 1; i <= 9; i++){
        printf(" %d", n1[i]);
        n[i] = n1[i];
    }
    printf("\n"); 

    for(i = 1; i <= 9; i++){
        soma = n[i] + n[i - 1];
        n1[i] = soma;
    }    

    for(i = 2; i <= 9; i++){
        printf(" %d", n1[i]);
        n[i] = n1[i];
    }
    printf("\n");  

    for(i = 2; i <= 9; i++){
        soma = n[i] + n[i - 1];
        n1[i] = soma;
    }    

    for(i = 3; i <= 9; i++){
        printf(" %d", n1[i]);
        n[i] = n1[i];
    }
    printf("\n");

    for(i = 3; i <= 9; i++){
        soma = n[i] + n[i - 1];
        n1[i] = soma;
    }    

    for(i = 4; i <= 9; i++){
        printf(" %d", n1[i]);
        n[i] = n1[i];
    }
    printf("\n");

    for(i = 4; i <= 9; i++){
        soma = n[i] + n[i - 1];
        n1[i] = soma;
    }    

    for(i = 5; i <= 9; i++){
        printf(" %d", n1[i]);
        n[i] = n1[i];
    }
    printf("\n");

    for(i = 5; i <= 9; i++){
        soma = n[i] + n[i - 1];
        n1[i] = soma;
    }    

    for(i = 6; i <= 9; i++){
        printf(" %d", n1[i]);
        n[i] = n1[i];
    }
    printf("\n");

    for(i = 6; i <= 9; i++){
        soma = n[i] + n[i - 1];
        n1[i] = soma;
    }    

    for(i = 7; i <= 9; i++){
        printf(" %d", n1[i]);
        n[i] = n1[i];
    }
    printf("\n");

    for(i = 7; i <= 9; i++){
        soma = n[i] + n[i - 1];
        n1[i] = soma;
    }    

    for(i = 8; i <= 9; i++){
        printf(" %d", n1[i]);
        n[i] = n1[i];
    }
    printf("\n");

    for(i = 8; i <= 9; i++){
        soma = n[i] + n[i - 1];
        n1[i] = soma;
    }    

    for(i = 9; i <= 9; i++){
        printf(" %d", n1[i]);
        n[i] = n1[i];
    }
    printf("\n");
    
    
    
    
        
    return 0;
}