#include <stdio.h>
#include <stdlib.h>
int main() {
    // 1. Declaração das variáveis
    float salario, percentual, valor_aumento, novo_salario;

    // 2. Entrada de dados
    printf("Digite o salario do funcionario: R$ ");
    scanf("%f", &salario);

    printf("Digite o percentual de aumento (ex: 15 para 15%%): ");
    scanf("%f", &percentual);

    // 3. Processamento
    // Calcula quanto vale o aumento em reais
    valor_aumento = salario * (percentual / 100.0);
    
    // Soma o aumento ao salário antigo
    novo_salario = salario + valor_aumento;

    // 4. Saída de dados
    printf("\n--- Resultado ---\n");
    printf("Valor do aumento: R$ %.2f\n", valor_aumento);
    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}
	
	

