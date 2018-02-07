#include<stdio.h>
void main()
{
int a,hour,minute;
printf("\n enter the minute");
scanf("%d",&a);
if(a!=0)
{
hour=a/60;
minute=a%60;
printf("\n hour:minute=%d:%d",hour,minute);
}
getch();
}
