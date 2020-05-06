#include<stdio.h>

int arr[1000001]={0};


void main()
{
	int a, n;
    scanf("%d",&n);
    while(n--)
    {
	    scanf("%d",&a);
        arr[a]++;
    }
    a=0;
    while(a<1000001)
    {
        while(arr[a])
        {
            printf("%d\n",a);
            arr[a]--;
        }
    a++;
    }
}
