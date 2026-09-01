#include <stdio.h>
#include <stdlib.h>

  main(){
	
   int base, altura, area;
	
	printf("Qual a base do triangulo: ");
	scanf("%d", &base);

	printf("Qual a altura do triangulo: ");
	scanf("%d", &altura);
	
	area = (base * altura) / 2;
	
	printf("O triangulo que tem a base igual a %d e a altura igual a %d tem uma area parecida a %d", base, altura, area);
	
	
	
}
	
	
