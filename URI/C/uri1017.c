#include<stdio.h>
int main(){
	int timespent, averagespeed, fuelconsumption = 12;
	double fuelneeded;
	scanf("%d %d", &timespent, &averagespeed);
	fuelneeded = (double) (timespent * averagespeed) / fuelconsumption;
	printf("%.3lf\n",fuelneeded);
	return 0;
}
