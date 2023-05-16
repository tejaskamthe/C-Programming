#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,n;
    printf("enter the limit");
    scanf("%d",&n);
    printf("%d\t%d\n",0,1);
    for(i=2;i<=n;i++)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
    }
}
