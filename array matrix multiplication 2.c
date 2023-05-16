#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,c[3][3],k;
    //printf("Enter The Row(i) & Column(j):");
   // scanf("%d%d",&n,&m);
    printf("First Matrix :\n");
    for(i=0;i<3;i++)               // Row
    {
        for(j=0;j<3;j++)           // Column
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("second Matrix :\n");
    for(i=0;i<3;i++)               // Row
    {
        for(j=0;j<3;j++)           // Column
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("First Matrix is:\n");
    for(i=0;i<3;i++)               // Row
    {
        for(j=0;j<3;j++)           // Column
        {
            printf("%d\t",a[i][j]);
        }
            printf("\n");
    }
    printf("Second Matrix is :\n");
    for(i=0;i<3;i++)               // Row
    {
        for(j=0;j<3;j++)           // Column
        {
            printf("%d\t",b[i][j]);
        }
            printf("\n");
    }

     printf("Multiplication Of Matrix:\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
            printf("%d\t",c[i][j]);       //Print Addition of Two Print:
        }
         printf("\n");
    }


    return 0;
}
