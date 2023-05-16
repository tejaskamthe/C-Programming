#include<stdio.h>
#include<string.h>
void main()
{
    FILE *fptr;
    int id;
    char name[30];
    float salary;
    fptr =fopen("a.c","a");
    if(fptr==NULL)
    {
        printf("File Does not exists \n");
        return 0;
    }
    int i,n;
    printf("How many Records do you want");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter The ID,Name,Salary:\n");
        scanf("%d%s%f",&id,&name,&salary);
        fprintf(fptr,"\n ID=%d Name=%s \t salary=%f",id,name,salary);

    }

    fclose(fptr);
}
