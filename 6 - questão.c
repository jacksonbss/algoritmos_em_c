#include<stdio.h>
#include<stdlib.h>
int main(){
	float preco_produto, valor;
	printf("Digite o Preco do Produto: \n");
	scanf("%f", &preco_produto);
	
	if((preco_produto < 20) || (preco_produto < 20.00)){
		valor = preco_produto + (preco_produto * 0.45);
	}else{
		valor = preco_produto + (preco_produto * 0.30);
	}
	printf("O valor de venda e: %f \n", valor);
	
	system("PAUSE");
	return 0;
}
