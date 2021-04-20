#include<stdio.h>
int main(){
	float a, b, c, average;
	scanf("%f %f %f", &a, &b, &c);
	average = ((a*2)+(b*3)+(c*5))/(2+3+5);
	printf("MEDIA = %.1lf\n", average);
	return 0;
}
