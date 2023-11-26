#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int validarPlaca(char *placa){
    int i;

        if (strlen(placa) != 8) {
            if(placa[4] == 'X' || (placa[3] == '-' && placa[4] != 'X')){
                return 1;
            }else{
                return 0;
            }
        }

        for (i = 0; i < 3; i++) {
            if (!isalpha(placa[i]) || !isupper(placa[i])) {
                return 0;
            }
        }

        for (i = 4; i < 8; i++) {
            if (!isdigit(placa[i])) {
                return 0;
            }
        }
        
    return 1;
}

int validaDia(char *diaSemana){
    char diasCorretos[7][15] = {"SEGUNDA-FEIRA", "TERCA-FEIRA", "QUARTA-FEIRA", "QUINTA-FEIRA", "SEXTA-FEIRA", "SABADO", "DOMINGO"};
    int i = 0;

    for(i = 0; i < 7; i++){
        if(strcmp(diaSemana, diasCorretos[i]) == 0){
            return 1;
        }
    }

    return 0;
}

void verificaCirculacao(){
    
}

int main(){
    char placa[8], diaSemana[30];

    scanf("%s", &placa);
    scanf("%s", &diaSemana);

    if (validarPlaca(placa)){
        printf("Placa valida.\n");
    }else{
        printf("Placa invalida.\n");
    }
    
    if (validaDia(diaSemana)){
        printf("Dia valido.\n");
    }else{
        printf("Dia da semana invalido\n");
    }


    return 0;
}

for (int o = 0; diaSemana[o] != '\0'; o++) {
        diaSemana2[o] = tolower(diaSemana[o]);
        contador++;
    }
    diaSemana2[contador] = '\0';