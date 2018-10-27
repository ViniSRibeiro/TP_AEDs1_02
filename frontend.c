#include <stdio.h>
#include <stdlib.h>
#include "controller.h"
#include "frontend.h"

void ler_arquivo(char* fileName) {
    char fp[] = fileName;
    int i, j, cidades, cont = 0;
    char codes[12];


    FILE *arq;

    arq = fopen(fp, "r");
    if (arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");

    else {
        fscanf(arq, "%s%s%s%d", codes, codes + 4, codes + 8, &cidades);
    }
    printf("=============================================================================\n");
    printf("Matricula1->");
    for (i = 0; i <= 3; i++) {
        printf("%c", codes[i]);
    }
    printf("\n");
    printf("Matricula2->");
    for (i = 4; i <= 7; i++) {
        printf("%c", codes[i]);
    }
    printf("\n");
    printf("Matricula3->");
    for (i = 8; i < 12; i++) {
        printf("%c", codes[i]);
    }
    printf("\n");
    printf("=============================================================================\n");
    printf("=============================================================================\n");
    printf("Quantidade de Cidades:%d\n", cidades);
    printf("=============================================================================\n");
    printf("=============================================================================\n");
//============================================================================================================
    int *matrixDistancias[cidades][cidades];
    for (int i = 0; i < cidades; i++) {
        for (int j = 0; j < cidades; j++)
            if (i == j) {
                matrixDistancias[i][j] = 0;
            } else {
                fscanf(arq, "%d", &matrixDistancias[i][j]);

            }
    }
    for (int i = 0; i < cidades; i++) {
        for (int j = 0; j < cidades; j++) {
            if (cont == cidades) {
                printf("\n");
                cont = 0;
            }
            printf("%d ", matrixDistancias[i][j]);
            cont++;
        }
    }

}

