#include<stdio.h>
#include<conio.h>
void main()
{
 int m=1,b,p,i;
 clrscr();
 printf("enter base number and their exponent ");
 scanf("%d%d",&b,&p);
 for(i=1;i<=p;i++)
   {
     m=m*b;
   }
   printf("result is %d ",m);
   getch();
   }