#include<stdio.h>
int main()
{
    int marks[10];
    int i,n,sum=0;
    float avg;
    printf("enter the student limit");
    scanf("%d",&n);
    printf("Marks list");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+marks[i];
    }
    printf("sum of marks student=%d\n",sum);
    avg=((sum/n)*100)/100;
    printf("Average of Studets marks=%.2f",avg);
}
