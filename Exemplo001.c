#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char Nome[150]; //Gasta 150 + 1 ("\0) = 151 caracteres
    char Telefone[20]; // 21 caracteres 
    char Endereco[200]; // 2021 caracteres 

} Pessoa;

int main() {

    Pessoa X;

    strcpy(X.Nome, "Maria Alves");
    strcpy(X.Telefone, "(61) 12345-6789");
    strcpy(X.Endereco, "SHIS 12 25 13");

    printf("%s\t%s\t%s\n", X.Nome, X.Endereco, X.Telefone);
    return 0;
}    
