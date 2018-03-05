#include<stdio.h>
void main()
{
int l,b,h,area,v;
printf("\n enter the length,breadth,height");
scanf("%d\t%d\t%d",&l,&b,&h);
area=2*((l*b)+(b*h)+(h*l));
v=l*b*h;
printf("\n AREA=%d",area);
printf("\n VOLUME=%d",v);
getch();
}
