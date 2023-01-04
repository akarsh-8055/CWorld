#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,x;
clrscr();
printf("enter a number ");
scanf("%d",&n);
while(n!=0)
{
x=n%10;
sum=sum+x;
n=n/10;
}
printf("%d",sum);\
getch();
}


