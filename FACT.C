#include<stdio.h>
#include<conio.h>
void main()
{
int n,fact=1,i;
clrscr();
printf("enter a number ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 fact=fact*i;
}
printf("factorial of number %d is %d",n,fact);
getch();
}