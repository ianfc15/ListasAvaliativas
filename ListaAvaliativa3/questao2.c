#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int meses = 0, i = 0;
    double aporte = 0, retorno = 0, valorFinal = 0;

    scanf(" %d", &meses);
    scanf(" %lf", &aporte);
    scanf(" %lf", &retorno);

    for(i = 1; i <= meses; i++){
        valorFinal = aporte * ((1 + retorno) * (pow(1 + retorno, i) - 1) / retorno);

        printf("Montante ao fim do mes %d: R$ %.2f\n", i, valorFinal);
        valorFinal = 0;
    }

    return 0;
}