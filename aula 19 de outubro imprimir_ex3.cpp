/*
Faça um programa em C para:
ler 2 numeros:
int num1, num2

imprimir a soma dos 2 numeros

*/
#include<stdio.h>

int main()
{
	int num1; 
	int num2;
	
	printf("\nEntre com o primeiro numero");
	scanf("%d",&num1);
	
	printf("\nEntre com o segundo numero");
	scanf("%d",&num2);
	
	printf("\nSoma =%d\n", num1+num2);
	
	system ("pause");
 	
 	return 0;
 	
}
