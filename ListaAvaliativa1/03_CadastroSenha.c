#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int s1, s2, i = 0;

    // printf("Cadastre uma senha:\n");
    scanf("%d", &s1);

    while(i != 1){
        if(s1 >= 0000 && s1 <=9999){
            printf("senha cadastrada: %d", s1);
                while(s2 != s1){
                // printf("Digite a senha cadastrada:\n");
                scanf("%d", &s2);
                    if(s2 == s1){
                        printf("senha valida!");
                    }else{
                        printf("senha invalida!");
                    }
                } 
            i++;
        }else{
            // printf("Senha não aceita!\n");
            // printf("Cadastre uma senha:\n");
            scanf("%d", &s1);
        }
    }

    return 0;
}