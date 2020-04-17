#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct jogadorbin{
char nombre[30];
int edad;
char ti[30];
int nume;
};
int main(){
	struct jogadorbin jogadorbin[100];
	int i,cont=0;
	FILE *play;
	play=fopen("foot.txt","r");
	if(play==NULL){
	printf("ERRO ");
	return 1;
	}
	while(!feof(play)){
	fscanf(play,"%s\n",jogadorbin[cont].nombre);
	fscanf(play,"%i\n",&jogadorbin[cont].edad);
	fscanf(play,"%s\n",jogadorbin[cont].ti);
	fscanf(play,"%i\n",&jogadorbin[cont].nume);
	cont++;
	}
	play=fopen("foot.txt","wb");
	if(play==NULL){
		printf("ERRO Inesperado\n");
		return 1;
	}
	for(i=0;i<cont;i++){
	fwrite((void*)&jogadorbin[i],sizeof(struct jogadorbin),1,play);
	
	}
	fclose(play);
	system("pause");
	return 0;
	
}
