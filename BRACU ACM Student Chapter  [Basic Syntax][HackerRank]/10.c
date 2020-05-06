#include<stdio.h>
int main()
{
    int i, j, count, temp;
    scanf("%d", &count);
    int array[count];
    for(i=0; i<count; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=0; i<count; i++)
    {
        for(j=i+1; j<count; j++)
        {
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for(i=0; i<count; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
