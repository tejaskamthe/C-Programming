#include<stdio.h>
int main()
{
    int a,b,c=0;
    int m=2;
    int limit=20;
    while(c<limit)
    {
        for (int n=1;n<m;++n)
        {
            a=m*m-n*n;
            b=2*m*n;
            c=m*m+n*n;
            if(c>limit)
                break;
                printf("%d%d%d \n",a,b,c);
        }
        m++;
    }
}
