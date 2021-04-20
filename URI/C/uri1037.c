#include<stdio.h>
int main(){
	float inputvalue;
	scanf("%f", &inputvalue);
	(inputvalue>=0 && inputvalue<=25) ? printf("Intervalo [0,25]\n")
	: (inputvalue>25 && inputvalue<=50) ? printf("Intervalo (25,50]\n")
	: (inputvalue>50 && inputvalue<=75) ? printf("Intervalo (50,75]\n")
	: (inputvalue>75 && inputvalue<=100) ? printf("Intervalo (75,100]\n")
	: printf("Fora de intervalo\n");
	return 0;
}
