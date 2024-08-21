#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	int vetor[5], i=0, maior=0;
	
	printf("\nDigite o Valor p/ o Vetor: \n");
	for(i=0;i<5;i++){
		scanf("%d",&vetor[i]);
		if(vetor[i] > maior)		{
			maior = vetor[i];
		}
	}
	if(maior % 2 == 0){
		printf("Par = %d",maior);
	}else{
		printf("Ímpar = %d",maior);
	}
}
