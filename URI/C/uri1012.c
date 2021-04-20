#include<stdio.h>
int main(){
	double a, b, c, triangle, circle, trapezium, square, rectangle;
	scanf("%lf %lf %lf", &a, &b, &c);
	triangle = .5*a*c, circle = 3.14159*c*c, trapezium = ((a+b)/2)*c, square = b*b, rectangle = a*b;
	printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n"
	, triangle, circle, trapezium, square, rectangle);
	return 0;
}
