#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int i, num_pessoas;
	float salario_bruto, salario, desconto;
	
	printf("Digite o Numero de Pessoas: \n");
	scanf("%d", &num_pessoas);
	
	for(i=1; i <= num_pessoas; i++){
	printf("Digite o Salario Bruto: \n");
	scanf("%f", &salario_bruto);
		if(salario_bruto <= 600){
			
			printf("\n");
			printf("Isento! \n");
			printf("\n");
			
		}else if((salario_bruto > 600) && (salario_bruto <= 1200)){
			desconto = salario_bruto * 0.20;
			salario = salario_bruto - desconto;
			
			printf("\n");
			printf("O desconto do INSS e de: %f \n", desconto);
			printf("Salario: %f \n", salario);
			printf("\n");
			
		}else if((salario_bruto > 1200) && (salario_bruto <= 2000)){
			desconto = salario_bruto * 0.25;
			salario = salario_bruto - desconto;
			
			printf("\n");
			printf("O desconto do INSS e de: %f \n", desconto);
			printf("Salario: %f \n", salario);
			printf("|\n");
			
		}else{
			desconto = salario_bruto * 0.30;
			salario = salario_bruto - desconto;
			
			printf("\n");
			printf("O desconto do INSS e de: %f \n", desconto);
			printf("Salario: %f \n", salario);
			printf("\n");
			
		}
	}
	system("PAUSE");
	return 0;
}
