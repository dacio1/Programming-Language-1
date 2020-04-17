#include<stdio.h>
#include<stdlib.h>
int i;
int primo(int a){
if(a%2 ==0){

return 0;}
 if(a%a==0){
	return 1;
}

if(a%2==1){
return 1;
}
}
int main(){
for(i=2;i<300;i++){

primo(i);


if(primo(i)==1){
	printf("%i\n",i);
}
}
system("pause");
return 0;
}
