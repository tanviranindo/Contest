#include<stdio.h>
int main(){
	char name;
	double salary, value, salarywithbonus;
	scanf("%s%lf%lf",&name, &salary, &value);
	salarywithbonus = salary+value*.15;
	
	printf("TOTAL = R$ %.2lf\n",salarywithbonus);
	return 0;
}
