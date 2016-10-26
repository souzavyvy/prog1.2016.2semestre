#include<stdio.h>
/*Faça um programa em C para ler uma idade e dizer se esta
pessoa pode dirigir ou não. 
Assumindo que só maiores de idade podem dirigir.*/

int main()
{
	int idade;
	
	printf("Entre com idade: ");
	scanf("%d",&idade);
	
	
	
	if (idade>=18)
	{ //condicao verdadeira
	   printf ("\nPode dirigir!!");
	}
	
	else
	{ //condicao falsa
	    printf ("\nNao pode dirigir!!");
	}
	return 0;
}
