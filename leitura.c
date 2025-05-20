//
// Created by goncalocosta on 20-05-2025.
//

#include "leitura.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

int listar_ficheiros(const char *pasta, char ***Lista_ficheiros) {
    DIR *dir = opendir(pasta);
    if(!dir)return -1;

}

    struct dirent *entry;
    int count = 0;
    int capacidade = 10
    *ficheiros = malloc(capacidade * sizeof(char *));

    while ((entry = readdir(dir)) != NULL) {
    if (entry->d_type == DT_REG) {
        if (count == capacidade) {
            capacidade *= 2;
            *ficheiros = realloc(*ficheiros, capacidade * sizeof(char *));

    }

    char *nome = malloc(strlen(entry->d_name) + strlen(pasta) + 2);
    sprintf(nome, "%s/%s", pasta, entry->d_name);
    (*ficheiros)[count++] = nome;
    }
}

    closedir(dir);
    return count;
}
