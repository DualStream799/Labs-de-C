// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa2.c"

#include <stdio.h>

int main() {
    double s = 0;
    int i = 1;
    while (i <= 10) {
        s += (double) i / 2;
        i++;
    }

    // TODO: corrija o código acima e use printf para
    // mostrar a metade da soma de 1 a 10
    printf("Result: %lf\n", s);

    // Configurações do mutirão. Não mexer.
    #include "../telemetry.c"

    return 0;
}