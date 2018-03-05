#include<stdio.h>
void main()
{
int i,n,k,a[10];
printf("\n enter the number n, k");
scanf("%d\t%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("%d",a[k-1]);
getch();
}
