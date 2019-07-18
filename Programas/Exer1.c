#include <stdio.h>
//Kassiane Lopes Façanha 
//Ciência da Computação

int main(){
	
	float comp,larg,area,potencia;
	
	
    printf("insira o Comprimento do comodo: ");
	scanf("%f",&comp);

	printf("insira a largura do comodo:");
	scanf("%f",&larg);
	
	
	
	area = (comp * larg);
	potencia = (area * 18);
	printf ("A area é:  \n %0.0f", area );
	
	printf ("\n A potencia é:  \n %0.0f", potencia);
	
	
	return (0);
		
	}
