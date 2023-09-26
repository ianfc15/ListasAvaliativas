#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int ano, i;

    // printf("Digite um ano para ser verificado:\n");
    scanf("%d", &ano);

    if (ano >= 1896 && ano <= 2022 && (ano - 1896) % 4 == 0 && ano != 1916 && ano != 1940 && ano != 1944){
        i = 1896;
        while (i <= 2022){
            if (ano == i){
                printf("Os Jogos Olímpicos de Verao ocorreram no ano de %d.\n", ano);
            }
            i = i + 4;
        }
    }else if(ano >= 1930 && ano <= 2022 && (ano - 1930) % 4 == 0 && ano != 1942 && ano != 1946){
        i = 1930;
        while (i <= 2022){
            if (ano == i){
                printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
            }
            i = i + 4;
        }
    }else{
        printf("Nao houve Jogos Olímpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
    }
 
   return 0;
};  