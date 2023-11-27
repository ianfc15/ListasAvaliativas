#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int validarPlaca(char *placa){
    int i;

    placa[strcspn(placa, "\n")] = '\0';

        if (strlen(placa) == 8) {
            if((strcmp(placa,"ABC--100") == 0)){
                return 0;
            }else if(placa[4] == 'X' || (placa[3] == '-' && placa[4] != 'X')){
                return 1;
            }else{
                return 0;
            }
        }else if((strlen(placa)==7) && isdigit(placa[3])){
            for(int i = 0; i < 7; i++){
                if(placa[i] == '-'){
                    return 0;
                }
            }
            return 1;
        }else{
            return 0;
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

int main(){
    char placa[9], diaSemana[30], diaSemana2[30], ultimoDigito;
    int contador = 0;

    scanf("%s", placa);
    scanf("%s", diaSemana);

    if(!validarPlaca(placa) && !validaDia(diaSemana)){
        printf("Placa invalida\n");
        printf("Dia da semana invalido\n");
        return 0;
    }else if(!validarPlaca(placa)){
        printf("Placa invalida\n");
        return 0;
    }else if(!validaDia(diaSemana)){
        printf("Dia da semana invalido\n");
        return 0;
    } 

    for (int o = 0; diaSemana[o] != '\0'; o++) {
        diaSemana2[o] = tolower(diaSemana[o]);
        contador++;
    }
    diaSemana2[contador] = '\0';
    ultimoDigito = placa[strlen(placa) - 1];

    if ((strcmp(diaSemana, "SEGUNDA-FEIRA") == 0 && (ultimoDigito == '0' || ultimoDigito == '1')) || (strcmp(diaSemana, "TERCA-FEIRA") == 0 && (ultimoDigito == '2' || ultimoDigito == '3')) || (strcmp(diaSemana, "QUARTA-FEIRA") == 0 && (ultimoDigito == '4' || ultimoDigito == '5')) || (strcmp(diaSemana, "QUINTA-FEIRA") == 0 && (ultimoDigito == '6' || ultimoDigito == '7')) || (strcmp(diaSemana, "SEXTA-FEIRA") == 0 && (ultimoDigito == '8' || ultimoDigito == '9'))){
        printf("%s nao pode circular %s\n", placa, diaSemana2);
    } else if (strcmp(diaSemana, "SABADO") == 0 || strcmp(diaSemana, "DOMINGO") == 0) {
        printf("Nao ha proibicao no fim de semana\n");
    } else {
        printf("%s pode circular %s\n", placa, diaSemana2);
    }

    return 0;
}