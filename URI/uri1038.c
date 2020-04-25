#include<stdio.h>
int main(){
	int code, quantity;
	double price;
	scanf("%d %d", &code, &quantity);
	  code==1 ? price = 4.00 * quantity : code==2 ? price = 4.50 * quantity
	: code==3 ? price = 5.00 * quantity	: code==4 ? price = 2.00 * quantity
	: code==5 ? price = 1.50 * quantity : price;
	
	printf("Total: R$ %.2lf\n", price);
	return 0;
}
