/*Exerc�cio 03 - Lista Repeti��o*/

#include <stdio.h>

main(){

	int numero, multiplicador, contador=0, resultado=0;

	printf("Digite um numero: ");
	scanf("%d",&numero);
	printf ("Digite um multyiplicador: ");
	scanf("%d",&multiplicador);

	while (contador<multiplicador){

		contador++;
		resultado = resultado + numero;

	}
	printf("%d * %d = %d",numero,multiplicador,resultado);
}
