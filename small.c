#include<stdio.h>
int main()
{
int array[100],n,i,mini;
printf("\n enter the numbers);
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
mini=array[0];
for(i=0;i<n;i++)
{
if(mini<array[i])
mini=array[i];
}
printf("\n smallest number in the array=%d",mini);
return 0;
}
