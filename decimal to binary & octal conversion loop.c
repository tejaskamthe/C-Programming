#include<stdio.h>
int main()
{
    int a[10],n,i;
    printf("Enter The decimal no=");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    printf("binary number=");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    int j,oct=0,dec=0,bin;
    printf("\n Enter the binary number=");
    scanf("%d",&bin);
    j=0;
    while(bin!=0)
    {
        dec=dec+(bin%10)*pow(2,j);
        j++;
        bin=bin/10;
    }
    j=1;
    printf("decimal value=%d",dec);
    while(dec!=0)
    {
        oct=oct+(dec%8)*j;
        dec=dec/8;
        j=j*10;
    }
    printf("\n octal value =%d",oct);
}
