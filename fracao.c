#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Definição de TAD Fração 

typedef struct {
    int numerador;
    int denominador;

}fracao;

fracao criarFracao(int n, int d){
    fracao F;
    F.numerador = n;
    F.denominador = d;
    return F;
}

    int main(){

        fracao F1 = criarFracao(7, 2);
        printf("o valor de F1 é %.2f.\n", (float)F1.numerador/F1.denominador);

    return 0;
}    
