#include<stdio.h>
void main()
{
int i,j,n,array[100],temp;
printf("\n enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{ scanf("%d",&array[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<(n-i-1);j++);
{
if(array[j]>array[j+1]
{
temp=array[j];
array[j]=array[j+1];
array[j+1]=temp;
}
}
}
printf("\nthe sorted array is");
for(i=0;i<n;i++)
printf("%d\t",array[i]);
getch();
}




