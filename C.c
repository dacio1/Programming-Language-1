#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct filtra{
    char nome[100];
    int idade;
    char time[100];
    int numero;
};

int main() {
    
    FILE *nad;
    struct filtra filtra[100];
    int i=0, j=0;
    
    nad = fopen("foot.txt", "rb");
    
    if(nad == NULL){
        printf("\nErro ao abrir o arquivo BIN\n");
        return 1;
    }
    
    while(!feof(nad)){
        fread((void *) &filtra[i], sizeof(struct filtra), 1,nad);
        i++;
    }
    
    
    for(j=0; j<=i; j++){
        if(strcmp(filtra[j].time,"sport") == 0){
            printf("%s", filtra[j].nome);
        }
    }
     fclose(nad);
    system("pause");
    return 0;
}

