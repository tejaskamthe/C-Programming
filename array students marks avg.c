#include<stdio.h>
int main()
{
    int i,n,mark[10],sum=0;
    float avg;
    printf("Enter The Subjects Count:");
    scanf("%d",&n);
    printf("Enter The Subjects Marks");
    for(i=0;i<n;i++)
    {
        scanf("%d",&mark[i]);
    }
    for(i=0;i<n;i++)
    {
      sum=sum+mark[i];
    }
    printf("Sum of Students=%d\n",sum);
    avg=(sum/n)*100/100;
    printf("Average=%.2f",avg);
}
