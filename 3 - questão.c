#include<stdio.h>
#include<math.h>
int main(){
	
	int num;
	 printf("Digite um numero: \n");
	 scanf("%d", &num);
	 
	 if((num % 3) == 0)
	 	printf("O numero %d e multiplo de 3 \n\n", num);
	 else
	 	printf("O numero %d nao e multiplo de 3 \n\n", num);
		 
	system("PAUSE");	 	
	return 0;
}
