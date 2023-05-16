#include<stdio.h>
int main()
{
    int i,n,a[10],max,min;
    printf("enter the Limit");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Largest No=%d",max);
    printf("\n Smallest No=%d",min);
}
