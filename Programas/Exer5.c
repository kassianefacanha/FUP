#include <stdio.h>

//Kassiane Lopes Façanha 
//Ciência da Computação


int main (){
float valor,valorf;

		printf("insira valor de fabrica	: ");
	    scanf("%f",&valor);

	if(valor<=12.000){
		
			valorf=(valor*0.5)+valor;
			printf ("O preço de fabrica: \n %0.3f", valor);
			printf("\nO preço fica por:\n %0.3f", valorf);
			
			
		}else if( (valor >12.000)&&(valor<=25.000)){
			
			valorf=(valor*0.10)+(valor*0.5)+valor;
			printf ("O preço de fabrica: \n %0.3f", valor);
			printf ("\nO preço fica por: \n %0.3f", valorf);
			
		}else {
			
			vvalorf=(valor*0.15)+(valor*0.10)+valor;
			printf ("O preço de fabrica: \n %0.3f", valor);
			printf ("\nO preço fica por: \n %0.3f", valorf);
			
}

return(0);
}
