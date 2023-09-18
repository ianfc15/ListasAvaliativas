#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int senha, senha2;

    printf("Cadastre uma senha:\n");
    scanf("%d", &senha);
    printf("Senha Cadastrada: %d\n", senha);

    while(senha2 != senha){
        printf("Digite a senha cadastrada:\n");
        scanf("%d", &senha2);
            if(senha2 == senha){
                printf("Senha Valida!\n");
            }else{
                printf("Senha Invalida!\n");
            }
    } 

    return 0;
}