#include<stdio.h>
void main()
{
int array[100],i,k,size;
printf("\n enter the size");
scanf("%d",&size);
for(i=0;i<size;i++)
{
scanf("%d",&array[i]);
}
k=size/2;
printf("\n middle element=%d",array[k]);
getch();
}
