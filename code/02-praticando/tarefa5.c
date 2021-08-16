// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa5.c"


#include <stdio.h>

// TODO: declare função manhattan aqui. Veja abaixo como ela será usada
int modulo (int n) {
    if (n >= 0 ) {
        return n;
    } else {
        return -n;
    }
}

int manhattan(a1, a2, b1, b2) {
    return modulo(a1-b1) + modulo(a2-b2);
}

int main() {
    
    // assertEquals é uma função do mutirão que confere
    // se o segundo argumento é igual ao terceiro.
    // Neste caso, se ele checa a chamada de manhattan retorna o valor esperado. 
    assertEquals("manhattan(0, 1, 2, 3) != 4", manhattan(0, 1, 2, 3), 4);
    assertEquals("manhattan(0, 1, 0, 2) != 1", manhattan(0, 1, 0, 2), 1);
    assertEquals("manhattan(1, 0, 2, 0) != 1", manhattan(1, 0, 2, 0), 1);
    assertEquals("manhattan(1, 2, 1, 2) != 0", manhattan(1, 2, 1, 2), 0);
    
    assertEquals("manhattan(0, -1, 0, 2) != 3", manhattan(0, -1, 0, 2), 3);
    assertEquals("manhattan(-1, 0, 2, 0) != 3", manhattan(-1, 0, 2, 0), 3);
    
    printSummary

    // Configurações do mutirão. Não mexer.
    #include "../telemetry.c"

    return 0;
}