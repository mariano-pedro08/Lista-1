#include<stdio.h>
#include <stdlib.h>

main (){
//Declaracao dos dados do salario base e a gratificacao e o imposto	
	float salario_base, salario_areceber, gratificacao, imposto;
//Entrada dos dados 	
	printf("Digite o salario base do funcionario: R$");
	scanf("%f",&salario_base);
	
	gratificacao= salario_base +50.00;

	imposto= salario_base* 0.10;	
	
	
	
	salario_areceber= salario_base + gratificacao - imposto;
	
//Saida dos dados
	
    printf("\n-------- Resultado --------\n");
    printf("Salario-base: R$ %.2f\n", salario_base);
    printf("Gratificacao: + R$ %.2f\n", gratificacao);
    printf("Imposto (10%%): - R$ %.2f\n", imposto);
    printf("---------------------------\n");
    printf("Salario a receber: R$ %.2f\n", salario_areceber);
    
	
	return 0; 
  
}
