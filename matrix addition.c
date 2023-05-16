#include<stdio.h>
int main()
{
    int i,j,sum=0,a[3][3];
    printf("Enter The Matrix Value:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("ADDTION: %d",sum);
    return 0;
}
