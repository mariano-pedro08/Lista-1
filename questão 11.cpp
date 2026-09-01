#include <stdio.h>
#include <math.h>
   
main (){
	
	float n;
	
	printf("Digite um numero maior que zero");
	scanf("%f",&n);
	
	if (n<=0) {
		 
		printf("O numero postivo tem que ser maior que zero:\n"); 
		
	}
	
	else{
		
		printf("\nResultado para o numero:%.2f\n",n);
		printf("O número ao quadrado:%.2f\n", pow(n,2));
		printf("numero ao cubo:%.2f\n",pow(n,3));
		printf("Raiz quadrada:%.2f\n",sqrt(n));
		printf("Raiz cubica:%.2f\n",cbrt(n));
		
	}
	
	
	
	
}
