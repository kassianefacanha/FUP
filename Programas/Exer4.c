#include <stdio.h>

//Kassiane Lopes Façanha 
//Ciência da Computação


int main (){
	
float valor,rend;
int operacao;

	printf("1-  Poupança \n2- Fundos de Renda Fixa \n  " );
	scanf("%d",&operacao);
	printf("insira valor do inverstimento	: ");
	scanf("%f",&valor);

	switch (operacao){
		case 1:
			rend=(valor*0.3);
			printf("O redeimento mensal é de:\n %0.2f", rend);
		break;
		case 2:
			rend=(valor*0.4);
			printf ("A diferenca do maior pelo menor é: \n %0.2f", rend);
		break;
	default:
		printf ("Operação invalida");

	}

return(0);
}
