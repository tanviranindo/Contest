#include<stdio.h>
int main(){
	float a, b, average;
	scanf("%f %f", &a, &b);
	average = ((a*3.5)+(b*7.5))/(3.5+7.5);
	printf("MEDIA = %.5lf\n", average);
	return 0;
}
