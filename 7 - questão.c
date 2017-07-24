#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,soma=0;
	
	printf("Entre com a quantidade de numero(s): ");
	scanf("%d", &n);
	int num[n], i;
	
	for(i=0; i <= n; i++){
		printf("Digite o valor: \n");
		scanf("%d", &num[i]);
	
		soma += num[i];
	}
	
	printf("A soma dos numeros eh: %d\n", soma);
	
	system("PAUSE");
	return 0;
}
