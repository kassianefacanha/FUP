#include <stdio.h>

int main(){

    float n1, n2, n3, med ,nn;
 
   nn=1;
	while(nn==1){
		

    printf("insira a nota 1: ");
	scanf("%f",&n1);

    printf("insira nota 2: ");
	scanf("%f",&n2);
        
    printf("insira nota 3: ");
    scanf("%f",&n3);



            med=(n1+n2+n3)/3;
            
	if(med>=7){
		 printf("%0.2f  Aprovado :\n", med);
		}
		else if(med<=4){
		 printf("%0.2f  AF :\n", med);
		}else{
			if(med>=7){
		 printf("%0.2f  Reprovado :\n", med);
		}
			}


    printf("Quer continuar? Entao digite 1 _____ senao digite 2");
    scanf("%f",&nn);
    

}
    return(0);
}
