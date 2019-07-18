#include <stdio.h>

int main(){

float n1,n2,n3,media;
	
	
    printf("insira a nota 1: ");
	scanf("%f",&n1);
	printf("insira a nota 2: ");
	scanf("%f",&n2);
	 printf("insira a nota 3: ");
	scanf("%f",&n3);

	media=(((n1*4)+(n2*5)+(n3*3))/12);
	printf ("A media é:  \n %0.2f", media );
	

	return (0);
		
	}
