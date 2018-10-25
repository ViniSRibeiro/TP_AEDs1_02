#include "controller.h"
#include <stdio.h>
#include <stdlib.h>

char* distancias;
int cidades;
char *permutacoes;
int *somas;


void troca(unsigned char vetor[], int i)
{
    int aux = vetor[0];
    vetor[0] = vetor[i];
    vetor[i] = aux;
}

void permuta(){


    int npermutacoes = 1;

    for(int i=2;i<cidades;i++){

        npermutacoes *= i;
    }
    permutacoes = malloc(sizeof(char)*npermutacoes);
    unsigned char *vetor = malloc(sizeof(cidades));
        for(int i = 0; i <= npermutacoes; i++)
        {
            troca(vetor, 0, i);
            permuta(vetor, 1, sup);
            troca(vetor, 0, i); // backtracking
        }

}