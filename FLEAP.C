//leap year 
#include<stdio.h>
#include<conio.h>
void main()
{
int leap(int);
int year,s;
clrscr();
printf("enter year ");
scanf("%d",&year);
s=leap(year);
s==1?printf("leap year"):printf("not a leap year");
getch();
}
int leap(int year)
{
if((year%400==0)||(year%4==0&&year%100!=0))
  return 1;
else
  return 0;
}
