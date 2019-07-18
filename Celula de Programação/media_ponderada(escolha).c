#include <stdio.h>

 
 int main(void)
 {
    float notas[0],pesos[0],media, soma,sompes;
    int x, i;
 
    printf("insira o numero de notas: ");
	scanf("%d",&x);
 
    for (i = 0; i <= x; i++)   
    {
		printf("insira a nota: ");
       scanf("%f", &notas[i]);
        printf("insira o peso: ");
        scanf("%f", &pesos[i]);
        soma+=(notas[i]*pesos[i]);
        sompes+=pesos[i];
        
    }
	
 
   
	media=soma/sompes;
	
	printf("A media é:  \n %0.2f", media );

     

    return 0;
 }
