#include<stdio.h>
#include <math.h>
 
  main(){
  	
 float n1, n2;
	
	printf("Digite o numero 1: ");
	scanf("%f", &n1);
	
	printf("Digite o numero 2: ");
	scanf("%f", &n2);
	
	if (n1, n2 < 0) {
		printf(" O numero deve ser maior que zero");
	}
	
	else {
		printf("A potencia de %.2f e %.2f e igual a %.2f", n1, n2, pow(n1, n2));
	  }
  	
  	
  }
  
