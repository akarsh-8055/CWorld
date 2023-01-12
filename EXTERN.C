//extern
#include<stdio.h>
#include<conio.h>
#include"my.c"
void main()
{
extern int a,b;
int sum(int,int);
int fact(int);
int c;
clrscr();
printf("%d",sum(a,b));   //definition in my.c file
c=a+b;
printf("\n%d",c);
printf("\n%d",fact(a));    //defintion in my.c file
getch();
}