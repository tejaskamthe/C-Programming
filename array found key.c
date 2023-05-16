#include<stdio.h>
int main()
{
    int a[10],i,n,key,f=0;
    printf("enter limit of array :");
    scanf("%d",&n);
    printf("enter elements in array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the key:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("\n%d is found at index %d",key,i);
    }
    else
    {
        printf("\n%d is not found in the array",key);
    }
    return 0;
}
