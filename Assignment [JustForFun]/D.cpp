#include<iostream>
#include<conio.h>
int main()
{
    int testcase, number, reverse, remember;
    scanf("%d", &testcase);
    for (int i = 1; i <= testcase; ++i)
    {
        scanf("%d", &number);
        while(number!=0)
	{
		remember=number%10;
		reverse=reverse*10+remember;
		number=number/10;
	}
        printf("Reverse = \n",reverse);
    }
    return 0;
}
