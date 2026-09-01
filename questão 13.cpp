#include <stdio.h>
#include <math.h>
 main (){
    
    float pes, polegadas, jardas, milhas;

    
    printf("Digite a medida em pes: ");
    scanf("%f", &pes);

    
    polegadas = pes * 12;

     
    jardas = pes / 3.0;

     
    milhas = jardas / 1760.0;

    printf("\n--- Resultados das Conversoes ---\n");
    printf("Polegadas: %.2f polegadas\n", polegadas);
    printf("Jardas:    %.2f jardas\n", jardas);
    printf("Milhas:    %.6f milhas\n", milhas);
}
 	
 	

