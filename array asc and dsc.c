#include<stdio.h>
int main()
{
    int i,n,a[10],j,temp;
    printf("enter the limit");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("accending order array");
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            temp=0;
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("\n%d\t",a[i]);
    }
}
