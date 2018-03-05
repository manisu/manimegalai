#include<stdio.h>
void main()
{
int n,i,a[10],sum=0;
printf("\n enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("\n sum=%d",sum);
getch();
}
