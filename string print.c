#include<stdio.h>

int main()
{
    char a[100],b[100],c[20];
printf("Enter The String:");
scanf("%s%s",&a,&b);
printf("%s \n",a,b);

printf("Enter The Length:%d\n",strlen(a));
printf("Enter The Length:%s\n",strupr(a));
printf("Enter The Length:%s\n",strlwr(a));
printf("Enter The Concatenate Two Strings:%s\n",strcat(a,b));
printf("Enter The String Copy:%s\n",strcpy(c,"OM"));

printf("Enter The Reverse string:%s\n\n",strrev(a));


}
