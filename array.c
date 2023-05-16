#include<stdio.h>
int main()
{
    int i,n,a[10];
    printf("Enter The Limit: \n");
    scanf("%d",&n);
    printf("Array List:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Display Array List\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
