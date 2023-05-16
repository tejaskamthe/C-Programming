#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char name[50];
    int id,mob,i,n;;
    fp =fopen("a.txt","w");
    printf("Enter How Many Student Info You Want:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter The ID,Stud name,Mobile:");
        scanf("%d%s%d",&id,&name,&mob);
        fprintf(fp,"\nId: %d\t Name: %s\t Mobile: %d",id,name,mob);
    }

    fclose(fp);
}
