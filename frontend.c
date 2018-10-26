#include <stdio.h>
#include <stdlib.h>
#include "controller.h"
#include "frontend.h"

void ler_arquivo(struct matriz* m, char* fileName){

        char fp[] = "C:\\Users\\selli\\Desktop\\arquivoES_TP2.txt",
                ch;
        int i, posicao = 0, matriculaconv[13];
        char matricula[13];


        FILE *arq;

        arq = fopen(fp, "r");
        if (arq == NULL)
            printf("Erro, nao foi possivel abrir o arquivo\n");

        else {
            while (((fscanf(arq, "%c", &matricula[posicao])) != EOF) || (posicao <= 13)) {
                posicao++;
            }

            for (i = 0; i <= 13; i++) {
                printf("%c \n", matricula[i]);
            }
        }
        for(i=0;i<=13;i++){
            matriculaconv[i]=(matricula[i]-'0');
            printf("%d", matriculaconv[i]);
        }
}


