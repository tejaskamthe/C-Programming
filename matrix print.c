#include<stdio.h>
int main()
{
    int i,j;
    printf("Output \n");
    for(i=1,j=5;i<=5;i++,j--)
    {
        if(j%3==0)
        {
            continue;
        }
        else
        {
            printf("%d \t %d\n",i,j);
        }
    }
}
