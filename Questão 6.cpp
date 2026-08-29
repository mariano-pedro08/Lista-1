#include <stdio.h>
#include <stdlib.h>

main (){
//Declaracao dos dados do salario base e a gratificacao e o imposto	
	float salario_base, salario_areceber, gratificacao, imposto;
//Entrada dos dados 	
	printf("Digite o salario base do funcionario: R$");
	scanf("%f",&salario_base);
	
	gratificacao= (salario_base* 0.05);

	imposto= (salario_base*0.07);	
	
	salario_areceber= salario_base + gratificacao - imposto;
	
//Saida dos dados
	
	printf("\n--------Resultado---------\n");
    printf("Salario_baseR$%.3f:",salario_base);
    printf("gratificacao(5%)R$%.3f:", gratificacao);
    printf ("Imposto(7%):R$%.3f:",imposto);
    printf("\n----------------------------\n");
    printf("Salario a receber:R$%.3f",salario_areceber);
	
	
	
  return 0;

}
