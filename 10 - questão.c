#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	char nome[40];
	int i = 1, num_pacientes;
	float imc, peso, altura;
	
	
	printf("Digite O Numero De Pacientes: \n");
	scanf("%d", &num_pacientes);
	
	while(i <= num_pacientes){
		fflush(stdin);
		printf("Digite seu nome: \n");
		gets(nome);
		printf("Digite seu peso: \n");
		scanf("%f", &peso);
		printf("Digite sua altura: \n");
		scanf("%f", &altura);
		
		imc = peso / (altura*altura);
		
		if(imc < 20){
			printf("\n");
			printf("PACIENTE: %s \n", nome);
			printf("IMC do Paciente = %f \n", imc);
			printf("Voce Esta Abaixo Do Peso!\n");
			printf("\n");
		}
		else if((imc >= 20) && (imc <= 25)){
			printf("\n");
			printf("PACIENTE: %s \n", nome);
			printf("IMC do Paciente = %f \n", imc);
			printf("Voce Esta Com O Peso Normal! \n");
			printf("\n");
		}
		else if((imc > 25) && (imc <= 30)){
			printf("\n");
			printf("PACIENTE: %s \n", nome);
			printf("IMC do Paciente = %f \n", imc);
			printf("Voce Esta Com Excesso De Peso! \n");
			printf("\n");
		}
		else if((imc > 30) && (imc <= 35)){
			printf("\n");
			printf("PACIENTE: %s \n", nome);
			printf("IMC do Paciente = %f \n", imc);
			printf("Voce Esta Com Obesidade! \n");
			printf("\n\n");
		}else{
			printf("\n");
			printf("PACIENTE: %s \n", nome);
			printf("IMC do Paciente = %f \n", imc);
			printf("Voce Esta Com Obesidade Morbita! \n");
			printf("\n");
		} i++;
	}
	
	system("PAUSE");
	return 0;
}
