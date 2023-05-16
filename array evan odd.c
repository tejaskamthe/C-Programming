#include<stdio.h>
int main()
{
    int i,a[10];
    printf("enter array element:\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("odd number:\n");
    for(i=0;i<6;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d\n",a[i]);
        }
    }
        printf("\n evan number:\n");
        for(i=0;i<6;i++)
        {
            if(a[i]%2==0)
            {
                printf("%d\n",a[i]);
            }
        }

}
