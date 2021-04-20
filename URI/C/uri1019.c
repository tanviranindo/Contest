#include<stdio.h>
int main(){
	int inputvalue, hours, minutes, seconds;
	scanf("%d", &inputvalue);
	hours = inputvalue / 3600, inputvalue = inputvalue % 3600;
	minutes = inputvalue / 60, inputvalue = inputvalue % 60;
	seconds = inputvalue;
	printf("%d:%d:%d\n", hours, minutes, seconds);
}
