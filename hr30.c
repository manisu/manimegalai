#include<stdio.h>
void main()
{
int hr1,hr2,min1,min2,h,m;
printf("\nenter the first timing");
scanf("%d\t%d",&hr1,&min1);
printf("\n enter the second timing");
scanf("%d\t%d",&hr2,&min2);
h=hr1-hr2;
m=min1-min2;
printf("%dhr %dmin",h,m);
getch();
}
