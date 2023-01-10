#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter two number ");
scanf("%d%d",&a,&b);
void swap(int,int);
swap(a,b);
printf("\n%d\t%d",a,b);
getch();
}
void swap(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
printf("%d\t%d",x,y);
}

