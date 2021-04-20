#include<stdio.h>
int main(){
	int totaldistance;
	double perliterconsumption, averageconsumption;
	scanf("%d %lf", &totaldistance, &perliterconsumption);
	averageconsumption = (double) totaldistance / perliterconsumption;
	printf("%.3lf km/l\n", averageconsumption);
	return 0;
}
