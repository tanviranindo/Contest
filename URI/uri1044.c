#include<stdio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	(b%a==0 || a%b==0) ? printf("Sao Multiplos\n") : printf("Nao sao Multiplos\n");
}
