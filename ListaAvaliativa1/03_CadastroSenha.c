#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int senha, senha2, i = 0;

    printf("Cadastre uma senha:\n");
    scanf("%d", &senha);

    while(i != 1){
        if(senha >= 0000 && senha <=9999){
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
            i++;
        }else{
            printf("Senha não aceita!\n");
            printf("Cadastre uma senha:\n");
            scanf("%d", &senha);
        }
    }
        
    

    

    return 0;
}