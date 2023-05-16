#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,add[3][3];
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
            scanf("%d\t",&b[i][j]);
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

   for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        add[i][j]=a[i][j]+b[i][j];          //addition of Two Matrix:
        }
    }
     printf("Addition Of Matrix:\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",add[i][j]);       //Print Addition of Two Print:
        }
         printf("\n");
    }


    return 0;
}
