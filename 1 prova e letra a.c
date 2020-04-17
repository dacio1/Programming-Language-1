#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct jogadores{
char names[30];
int age;
char time[30];
int number;
};
int main(){
	typedef struct jogadores jogadores;
	jogadores res;
	int op=3;
	FILE *jog;
	jog=fopen("foot.txt","w");
	if(jog==NULL){
	printf("ERRO AO ESCREVER\n");
	return 1;
	}
	while(op==3){
	printf("\nDigite o nome:\n");
	scanf("%s",res.names);
	printf("\nDigite a idade:\n");
	scanf("%i",&res.age);
	printf("\nDigite o time:\n");
	scanf("%s",res.time);
	printf("\nDigite o numero:\n");
	scanf("%i",&res.number);
	fprintf(jog,"%s\n",res.names);
	fprintf(jog,"%i\n",res.age);
	fprintf(jog,"%s\n",res.time);
	fprintf(jog,"%i\n",res.number);
	printf("\nDigite 3 pra cadastrar mais:\n");
	scanf("%i",&op);
	}
	fclose(jog);
	system("pause");
	return 0;
}
