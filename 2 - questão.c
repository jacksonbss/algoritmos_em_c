#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	float fx, x, a, b, c;
	
	printf("Digite o valor de A: \n");
	scanf("%f", &a);
	printf("Digite o valor de B: \n");
	scanf("%f", &b);
	printf("Digite o valor de C: \n");
	scanf("%f", &c);
	printf("Digite o valor de X: \n");
	scanf("%f", &x);
	
	fx = a*(x*x) + (b * x) + c;
	printf("O valorr de F(x) E : %f \n", fx);
	
	system("PAUSE");
	return 0;
}
