#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=6;i++) // rows
    {
        for(j=6;j>=i;j--) // column
        {
            printf("* ");
        }
        printf("\n");
    }
}
