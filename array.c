#include<stdio.h>
void main()
{ 
int array[100],i,size;
printf("\n enter the size");
scanf("%d",&size);
for(i=0;i<size;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<size;i++)
{
printf("%d,%d",array[i],i);
}
getch();
}
