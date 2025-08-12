#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Definição de TAD Fração 

typedef struct {
    int num;
    int den;

}Fracao;

//Protótipo das fynções 

int calcularMDC(int A, int B);
Fracao simplificarFracao(Fracao F);
Fracao criarFracao(int N, int D);
void exibirFracao(Fracao F);

int main(){

    system("cls");

    Fracao F1 = criarFracao(24, 30);
    F1 = simplificarFracao(F1);
    exibirFracao(F1); // será exibido 4/5
    
    Fracao F2 = criarFracao(-30, 40);
    F2 = simplificarFracao(F2); 
    exibirFracao(F2); // será exibido -3/4

    return 0;
}

Fracao criarFracao(int N, int D){
    Fracao F;
    F.num = N;
    F.den = D;
    return F;
}