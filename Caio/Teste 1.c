#include<stdio.h>
#include<stdlib.h>
void funcao() {
printf("Funcao funciona\n");
}

int main(){
int num1, num2;
float num3;
char letra1;
char palavra1[21];
printf("Digite um valor maior ou igual a 5:\n");
scanf("%d", &num1);
if(num1>=5){
printf("Digite a palavra:\n");
scanf("%s", palavra1);
for (num2=1;num2<4;num2++){
printf("O valor e: %d\n", num1);
printf("A palavra e: %s\n", palavra1);
funcao();
}
}
else{
printf("Voce digitou um valor menor que cinco\n");	
}
system("pause");
}
