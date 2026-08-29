#include <stdio.h>
#include <stdlib.h>

main(){

    // 1. Declaração das variáveis para valores em dinheiro
    float salario, novo_salario;

    // 2. Entrada de dados
    printf("Digite o salario do funcionario: R$ ");
    scanf("%f", &salario);

    // 3. Processamento: Calculando o aumento de 25% (salario * 1.25)
    novo_salario = salario * 1.25;

    // 4. Saída de dados
    printf(" novo salario com 25%% de aumento e: R$ %.2f\n", novo_salario);

    return 0;
}
   



