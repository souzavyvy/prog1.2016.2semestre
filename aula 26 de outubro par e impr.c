#include<stdio.h>
/*Fa�a um programa em C para ler um 
n�mero inteiro e dizer se este � par ou impar*/

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
