#include<stdio.h>
int main()
{
    int i,j,a[3][3],mult=1;
    printf("Enter The matrix values: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            mult=mult*a[i][j];
        }
    }
        printf("Multiplication= %d",mult);
        return 0;
}
