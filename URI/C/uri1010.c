#include<stdio.h>
int main(){
	int productcode1, productcode2, quantity1, quantity2;
	double unitprice1, unitprice2, needtopay;
	scanf("%d %d %lf %d %d %lf", &productcode1, &quantity1, &unitprice1, &productcode2, &quantity2, &unitprice2);
	needtopay = quantity1*unitprice1+quantity2*unitprice2;
	printf("VALOR A PAGAR: R$ %.2lf\n",needtopay);
	return 0;
}
