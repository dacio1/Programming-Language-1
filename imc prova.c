#include<stdio.h>
#include<stdlib.h>
float imc(float a,float b){
	float c;
	c=a/(b*b);
	return c;
}
int main(){
	int i;
	int abaixo=0;
	int normal=0;
	int sobrepeso=0;
	float alt[3];float peso[3];
	for(i=0;i<3;i++){
		printf("Digite seu peso:\n");
		scanf("%f",&peso[i]);
		printf("di sua alt:\n");
		scanf("%f",&alt[i]);
		imc(peso[i],alt[i]);
		if(imc(peso[i],alt[i])<18.5){
	    abaixo++;
		}
		else if(imc(peso[i],alt[i])>18.5 <=24.5){
		normal++;
		}
		else if(imc(peso[i],alt[i])>24.5){
		sobrepeso++;
		}
	
		
			
		
		
	}
	printf("\nO numero de pessoas com o peso abaixo do normal eh:%i\n",abaixo);
	printf("\nO numero de pessoas com o peso normal eh de:%i\n",normal);
	printf("\nO numero de pessoas com sobrepeso eh de :%i\n",sobrepeso);
	system("pause");
	return 0;
}
