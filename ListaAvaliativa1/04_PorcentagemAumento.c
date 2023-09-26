#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char experiencia;
    double salario;

    // printf("Digite o nivel de experiencia do funcionario:\n");
    scanf("%c", &experiencia);

    // printf("Digite o salario do funcionario:\n");
    scanf("%lf", &salario);

    if(experiencia == 'a'){
        salario = salario + (0.05 * salario);
    }else if(experiencia == 'b'){
        salario = salario + (0.07 * salario);
    }else if(experiencia == 'c'){
        salario = salario + (0.08 * salario);
    }

    printf("R$ %.2lf", salario);

    return 0;
}