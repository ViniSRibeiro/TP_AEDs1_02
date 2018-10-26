#include <stdio.h>
#include <stdlib.h>
#include "controller.h"
#include "frontend.h"

void ler_arquivo(struct matriz* m, char* fileName){
    FILE* fp;
    fp = fopen("C:\\Users\\selli\\Desktop\\arquivoES_TP2.txt");

    if (fp==NULL)
    {
        printf("Erro");
        return 0;
    }
    int Linha[100];
    int num = 0, cont;

    while (!feof(fp))
    {
        fgets(Linha, 100, fp);
            printf("%d",Linha);
    }
    while( (cont=fgetc(arq))!= EOF )
    {
        if(cont == '\n')
			  num++;
    }

	printf("Existem %d linhas no arquivo\n", num);
    fclose(fp);
    return;
}
