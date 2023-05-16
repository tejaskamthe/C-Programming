#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int i,n,sum=0;
    printf("Enter Total No. Of Elements:");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("insufficient memory\n");
    }
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        printf("Enter The Elements %d:",i+1);
        scanf("%d",(arr+i));
    }
    printf("array elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(arr+i));
        sum=sum+ *(arr+i);
    }
    printf("\nsum of all elements:%d",sum);
}

