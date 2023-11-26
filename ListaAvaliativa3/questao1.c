#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int romano_decimal(char numeroRomano[]) {
    int i, decimal = 0;
    int v[7] = {1000, 500, 100, 50, 10, 5, 1};
    char numerais[7] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};

    for (i = 0; i < strlen(numeroRomano); i++) {
        int atual = 0;
        for (int j = 0; j < 7; j++) {
            if (numeroRomano[i] == numerais[j]) {
                atual = v[j];
                break;
            }
        }

        if (i < strlen(numeroRomano) - 1) {
            int proximo = 0;
            for (int j = 0; j < 7; j++) {
                if (numeroRomano[i + 1] == numerais[j]) {
                    proximo = v[j];
                    break;
                }
            }

            if (atual < proximo) {
                decimal += (proximo - atual);
                i++;
                continue;
            }
        }

        decimal += atual;
    }

    return decimal;
}

void decimal_binario(int decimal) {
    char binario[32];
    int i = 0;

    while (decimal > 0) {
        binario[i++] = (decimal % 2) + '0';
        decimal /= 2;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", binario[j]);
    }
    printf("\n");
}

void decimal_hexadecimal(int decimal) {
    printf("%x\n", decimal);
}

int main() {
    char numeroRomano[13];

    scanf("%s", numeroRomano);

    int decimal = romano_decimal(numeroRomano);

    printf("%s na base 2: ", numeroRomano);
    decimal_binario(decimal);

    printf("%s na base 10: %d\n", numeroRomano, decimal);

    printf("%s na base 16: ", numeroRomano);
    decimal_hexadecimal(decimal);

    return 0;
}
