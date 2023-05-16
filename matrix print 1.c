#include<stdio.h>
int main()
{
    int i,j,n=3,c=n-1;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            printf("%d",c++);
        for(j=1;j<=n;j++)
        {
            printf("%d",i);
        }
        if(i%2!=0)
            printf("%d",c++);
            printf("\n");
    }
    return 0;
}
