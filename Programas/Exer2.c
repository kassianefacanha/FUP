#include <stdio.h>

//Kassiane Lopes Façanha 
//Ciência da Computação

int main(){
	
	float real,dolar,marco,libra;
    printf("insira o valor(reais):");
	scanf("%f",&real);

    dolar = (real /1.80);
    marco = (real / 2);
    libra = (real/ 1.57);
  
	printf ("real para o dolar:  \n %0.2f", dolar );
	printf ("\n real para o marco:  \n %0.2f", marco );
	printf (" \n real para o libra:  \n %0.2f", libra);
	

	return (0);
		
	}
