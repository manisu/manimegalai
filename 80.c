#include<stdio.h>
#include<string.h>
void main()
{
int a[10],i,l;
printf("\n enter the number");
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]%2!=0)
{
printf("%d\t",a[i]);
}
}
getch();
}
