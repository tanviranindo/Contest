#include<stdio.h>
int main()
{
    float i, j, k;
    for (i=0,j=1,k=0; i<2.1; j++,k++)
    {
      if(k==3)
      {
        i= i+0.2;
        j= i+1;
        k =0;
      }
      if(i<2.1)
      {
        if(i==1 || (i>2 && i<2.1) || i==0)
        {
            printf("I=%.0f J=%.0f\n",i,j);
        }
        else
        {
          printf("I=%.1f J=%.1f\n",i,j);
        }
      }
    }
    return 0;
}
