#include<stdio.h>
int main(){
	int amount;
	scanf("%d", &amount);
	int hundred, fifty, twenty, ten, five, two, one, amountstoredinasafeplace = amount;
	hundred = amount / 100, amount = amount % 100;
	fifty = amount / 50, amount = amount % 50;
	twenty = amount / 20, amount = amount % 20;
	ten = amount / 10, amount = amount % 10;
	five = amount / 5, amount = amount % 5;
	two = amount / 2, amount = amount % 2;
	one = amount / 1;
	printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", 
	amountstoredinasafeplace, hundred, fifty, twenty, ten, five, two, one);
	
	return 0;
}
