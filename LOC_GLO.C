//use local and global variable
#include<stdio.h>
#include<conio.h>
int x=20;
void main()
{
int a=5;
clrscr();
void fun(int);
fun(a);
if(1)
{
int x=10;           //assigned x value is never used because both x are differnt
printf("%d\t",::x);
}
printf("%d\t",x);
if(1)
{
int x=30;
printf("%d\t",x);         //local
}
if(1)
{
int x=15;
::x=x;              //now global variable value will changed
printf("%d\t",x);
}
printf("%d",x);
getch();
}
void fun(int y)
{
 printf("%d\t",x);
 printf("%d\t",y);
 }

