#include<stdio.h>
/*Faça um programa em C para ler um 
número inteiro e dizer se este é par ou impar*/

int main()
{
	int num;
	
	printf("Entre com numero: ");
	scanf("%d",&num);
	
	
	
	if ((num%2)==0)
	{ //condicao verdadeira
	   printf ("\nnumero par!!");
	}
	
	else
	{ //condicao falsa
	    printf ("\nnumero impar!!");
	}
	return 0;
}
