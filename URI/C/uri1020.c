#include<stdio.h>
int main(){
	int inputvalue, years, months, days;
	scanf("%d", &inputvalue);
	years = inputvalue / 365, inputvalue = inputvalue % 365;
	months = inputvalue / 30, inputvalue = inputvalue % 30;
	days = inputvalue;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);
}
