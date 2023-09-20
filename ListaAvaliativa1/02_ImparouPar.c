#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n, n2, soma;

    printf("Digite um numero que sera verificado\n");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("%d eh par\n", n);
    }else if(n % 2 != 0){
        printf("%d eh impar\n", n);
    }
    
    n2 = n;
    while (n2 > 0)
    {
        soma = soma + (n2 % 10);
        n2 = n2 / 10;
    }
    

    printf("A soma dos algarismos de %d eh %d\n", n, soma);
    
    return 0;
}