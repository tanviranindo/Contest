#include<stdio.h>
int main(){
	int a, b;
	float x, calculation; 
	scanf("%d %d %f", &a, &b, &x);
	calculation = b*x;
	printf("NUMBER = %d\nSALARY = U$ %.2f\n",a, calculation);
	return 0;
}
