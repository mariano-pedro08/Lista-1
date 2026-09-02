#include <stdio.h>
#include <stdlib.h>

main (){
	
	float salario, cheque1,cheque2;
	float cpmf1,cpmf2,total_retirado,saldo_atual;
	
	printf("Digite o valor do salario depositado:R$");
	scanf("%f",&salario);
	
	printf("Digite o valor do primeiro cheque:R$");
	scanf("%f",&cheque1);
	
	printf("Digite o valor do segundo cheque:R$");
	scanf("%f",&cheque2);
	
	cpmf1= cheque1*(0.38/100);
	cpmf2= cheque2*(0.38/100);
	
	total_retirado= (cheque1+cpmf1) + (cheque2+cpmf2);
	
	printf("\n--- Extrato Bancario ---\n");
    printf("Salario depositado:  R$ %.2f\n", salario);
    printf("CPMF Cheque 1:       R$ %.2f\n", cpmf1);
    printf("CPMF Cheque 2:       R$ %.2f\n", cpmf2);
    printf("Total descontado:    R$ %.2f\n", total_retirado);
    printf("-----------------------------\n");
    printf("Saldo atual na conta: R$ %.2f\n", saldo_atual);
	
	return 0;
	
}
