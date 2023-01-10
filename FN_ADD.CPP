#include<stdio.h>
#include<conio.h>
void add(int,int);
void main()
{
int a,b;
clrscr();
printf("enter two number");
scanf("%d%d",&a,&b);
add(a,b);
getch();
}
void add(int x,int y)
{
int sum;
sum=x+y;
printf("sum is %d",sum);
}