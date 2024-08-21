#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	int vetor1[5],vetor2[5],vetor3[5], i=0;
	
	//Entrada do Valor
	printf("\nDigite o Valor p/ o 1° Vetor: \n");
	for(i=0;i<5;i++){
		scanf("%d",&vetor1[i]);
	}
	printf("\nDigite o Valor p/ o 2° Vetor: \n");
	for(i=0;i<5;i++){
		scanf("%d",&vetor2[i]);
	}
	
	//Processamento
	for(i=0;i<5;i++){
		vetor3[i] = vetor1[i]*vetor2[i];
	}
	
	//Saída dos Valores
	for(i=0;i<5;i++){
		printf("\n%d X %d = %d",vetor1[i],vetor2[i],vetor3[i]);
	}
}
