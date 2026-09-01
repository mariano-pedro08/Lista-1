#include <stdio.h>
main(){
	
	int idade_atual,idade_2050, ano_nascimento;
	
	printf("ano de nascimento:");
	scanf("%i",&ano_nascimento);
	
	idade_atual =   2026 -ano_nascimento;
	idade_2050  =    2050  -ano_nascimento;
	
	printf("Agora a pessoa tem %d e em 2050 ela terá %d",idade_atual,idade_2050);
	
	return 0;
	
}
