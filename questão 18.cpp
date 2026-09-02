#include <stdio.h>
main(){
	float peso_saco_kg, racao_gato_g;
    float peso_saco_g, consumo_diario, consumo_5_dias;
    float restante_g, restante_kg;

    printf("Digite o peso do saco de racao (em kg): ");
    scanf("%f", &peso_saco_kg);

    printf("Digite a quantidade de racao por gato por dia (em gramas): ");
    scanf("%f", &racao_gato_g);

    peso_saco_g = peso_saco_kg * 1000.0;
     consumo_diario = 2 * racao_gato_g;

    consumo_5_dias = consumo_diario * 5.0;
    restante_g = peso_saco_g - consumo_5_dias;
    restante_kg = restante_g / 1000.0;

    printf("\n--- Consumo de Racao em 5 Dias ---\n");
    printf("Consumo total dos 2 gatos em 5 dias: %.2f g\n", consumo_5_dias);
    printf("Restante de racao no saco:  %.2f g\n", restante_g, restante_kg);
	
		
 
	
	
	
	
	
	
}
