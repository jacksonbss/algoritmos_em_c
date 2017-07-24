#include<stdio.h>

int main(){
	float salario, salario_minimo, quantidade;
	
	printf("Digite o valor do salario: \n");
	scanf("%f", &salario);
	printf("Digite o valor do salario minimo: \n");
	scanf("%f", &salario_minimo);
	
	quantidade = salario / salario_minimo;
	
	printf("A quantidade de salario e: %f \n", quantidade);
	
	system("PAUSE");
	return 0;
}
