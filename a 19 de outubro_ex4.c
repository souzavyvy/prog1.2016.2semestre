#include<stdio.h>
/*Fa�a um programa em C para ler 2 n�meros inteiros e exibir a soma, subtra��o,multiplica��o e divis�o,
 da seguinte forma*/
 
int main()
{
	int num1; 
	int num2;
	
	printf("\nEntre com o primeiro numero1: ");
	scanf("%d",& num1);
	
	printf("\nEntre com o segundo numero: ");
	scanf("%d",& num2);
	
	printf("\nSoma = %d\n", num1+num2);
	printf("\nSubtracao = %d\n", num1-num2);
	printf("\nMultipicacao = %d\n", num1*num2);
	printf("\nDivisao = %d\n",num1/num2);
	system ("pause");
 	
 	return 0;
 	
}
