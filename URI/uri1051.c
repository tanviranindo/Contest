#include<stdio.h>
int main()
{
    float salary, b, b1, c, c1, d, d1;
    scanf("%f", &salary);
    if(salary <= 2000.0)
    {
        printf("Isento\n");
    }
    else
    {
        if(salary > 2000.0  && salary <= 3000.0)
        {
            b=salary-2000;
            b1=((b*8)/100);
            printf("R$ %.2f\n", b1);
        }
        else if(salary > 3000.0  && salary <= 4500.0)
        {
            b=salary-2000;
            c=b-1000;
            b=b-c;
            b1=((b*8)/100);
            c1=((c*18)/100);
            printf("R$ %.2f\n", b1+c1);
        }
        else
        {
            b=salary-2000;
            c=b-1000;
            d=c-1500;
            b=b-c;
            c=c-d;
            b1=((b*8)/100);
            c1=((c*18)/100);
            d1=((d*28)/100);
            printf("R$ %.2f\n", b1+c1+d1);
        }
    }
    return 0;
}
