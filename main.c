//
// Created by goncalocosta on 20-05-2025.
//
#include <stdio.h>
#include <stdlib.h>
#include "leitura.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <caminho_da_pasta>\n", argv[0]);
        return 1;
    }

    char **Lista_ficheiros = NULL;
    int num_ficheiros = Listar_ficheiros(argv[1], &Lista_ficheiros);

    if (num_ficheiros == 0) {
    printf("Nenhum ficheiro encontrado\n", argv[1]);
    return 1;
    }

    for (int i = 0; i < num_ficheiros; i++) {
        printf("Ficheiro: %s\n", Lista_ficheiros[i]);
        free(Lista_ficheiros[i]);
    }
    free(Lista_ficheiros);
    return 0;
}