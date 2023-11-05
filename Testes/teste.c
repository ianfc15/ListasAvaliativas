#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome1[30], nome2[30];
    
    fgets(nome1, 30, stdin);
    fgets(nome2, 30, stdin);

    printf("%s", nome1);
    printf("%s", nome2);

    return 0;
}