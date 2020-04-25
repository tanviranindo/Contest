#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c, temp, max;
	scanf("%d %d %d", &a, &b, &c);
	temp = ((a + b + abs(a - b)) / 2);
	max = ((temp + c + abs(temp - c)) / 2);
	printf("%d eh o maior\n",max);
	return 0;
}
