#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int ano, i;

    printf("Digite um ano para ser verificado:\n");
    scanf("%d", &ano);

    if (ano >= 1896 && ano <= 2022 && (ano - 1896) % 4 == 0){
        i = 1896;
        while (i <= 2022){
            if (ano == i){
                printf("Os Jogos Olímpicos de Verão ocorreram no ano de %d.", ano);
            }
            i = i + 4;
        }
    }else if(ano >= 1930 && ano <= 2022 && (ano - 1930) % 4 == 0){
        i = 1930;
        while (i <= 2022){
            if (ano == i){
                printf("A Copa do Mundo de Futebol ocorreu no ano de %d.", ano);
            }
            i = i + 4;
        }
    }else{
        printf("Não houve Jogos Olímpicos de Verão ou Copa do Mundo no ano de %d.", ano);
    }

    
   return 0;
}