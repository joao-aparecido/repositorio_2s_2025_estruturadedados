#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * fp; // Declara um ponteiro para arquivo
    fp = fopen("teste.txt", "w"); // Abre o arquivo para escrita

    if (fp == NULL) {
       printf("Erro ao abrir o arquivo!\n");
       exit(1); // Encerra o programa se o arquivo não puder ser aberto
    }

    printf("Arquivo aberto/criado!\n");
    fclose(fp); // Fecha o arquivo

    return 0;
}