#include "controller.h"
#include <stdio.h>
#include <stdlib.h>

char* distancias;
int cidades;
char *permutacoes = ;
int *somas;


void troca(unsigned char vetor[], int i)
{
    unsigned char aux = vetor[0];
    vetor[0] = vetor[i];
    vetor[i] = aux;
}

void permuta(){


    int npermutacoes = 1;

    for(int i=2;i<cidades;i++){

        npermutacoes *= i;
    }
    int *vetor_cidades = malloc(sizeof(int)*npermutacoes);
    for (int i = 0; i < cidades; ++i) {
        vetor_cidades[i] = i;
    }
    unsigned char *vetor = malloc(sizeof(cidades));
        for(int i = 0; i <= npermutacoes; i++)
        {
            troca(vetor_cidades, 0, i);
            //preencher a variavel permutaçoes
            troca(vetor_cidades, 0, i); // backtracking
        }

}