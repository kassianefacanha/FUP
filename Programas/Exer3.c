#include <stdio.h>

//Kassiane Lopes Façanha 
//Ciência da Computação


int main (){
int a, b, c, operacao;

   printf("insira numero	: ");
	scanf("%d",&a);

	printf("insira outro numero: ");
	scanf("%d",&b);

 printf("1-Media entre os números digitados \n-2 - Diferença do maior pelo menor \n3- Produto entre os números digitados \n4-Divisão do primeiro pelo segundo	:\n  " );
	scanf("%d",&operacao);

		switch (operacao){
			case 1:
				c=(a+b)/2;
				printf("A media dos numeros é:/n %d", c);
			break;
			case 2:
				if(a >b){
				c=a-b;
						} 
				else {
				c=b-a;	
						}
				printf ("A diferenca do maior pelo menor é: \n %d", c);
				break;
			case 3:
				c=a*b;
				printf ("Produto entre os números digitados é:\n %d", c);
				break;
			case 4:
				if(b==0){
				printf ("Operação invalida, não pode possuir um numero nulo");
						} 
				else {
				c=a/b;
				printf ("Divisão do primeiro pelo segundo é:\n %d", c);	
						}

				break;
		default:
				printf ("Operação invalida");

						}

return(0);
}
