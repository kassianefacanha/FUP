#include <stdio.h>

int main(){

float sal;
float nsal;
float aumentosal;
float porcent;
//_______________________________________

printf("insira o sálario do funcionário: ");

    scanf("%f",&sal);

printf("insira a porcentagem do aumento: ");

    scanf("%f",&porcent);

nsal = sal + (sal * porcent)/100;

aumentosal = (sal * porcent)/100;

printf("valor do novo salário: \n" "%f", nsal);

printf("\n");

printf("o aumento do salário foi de: \n" "%f",aumentosal);
    return(0);
}
