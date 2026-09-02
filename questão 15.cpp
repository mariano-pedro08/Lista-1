#include <stdio.h>
#include <stdlib.h>

main(){
 
 float preco_fabrica, perc_lucro, perc_impostos;
    float valor_lucro, valor_impostos, preco_final;

    // 1. Entrada de dados
    printf("Digite o preco de fabrica do veiculo: ");
    scanf("%f", &preco_fabrica);

    printf("Digite o percentual de lucro do distribuidor (%%): ");
    scanf("%f", &perc_lucro);

    printf("Digite o percentual de impostos (%%): ");
    scanf("%f", &perc_impostos);

    // 2. Processamento (Cálculos)
    valor_lucro = preco_fabrica * (perc_lucro / 100.0);
    valor_impostos = preco_fabrica * (perc_impostos / 100.0);
    preco_final = preco_fabrica + valor_lucro + valor_impostos;

    // 3. Saida dos resultados
    printf("\n--- Detalhamento do Custo do Veiculo ---\n");
    printf(" Valor do lucro do distribuidor: R$ %.2f\n", valor_lucro);
    printf(" Valor dos impostos:             R$ %.2f\n", valor_impostos);
    printf(" Preco final ao consumidor:      R$ %.2f\n", preco_final);

    return 0;
}	



}
	

