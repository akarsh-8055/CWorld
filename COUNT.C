#include<stdio.h>
#include<conio.h>
void main()
{
int n,c=0,r;
clrscr();
printf("enter a number ");
scanf("%d",&n);
while(n!=0)
{
 c=c++;
 n=n/10;
 }
 printf("%d",c);
getch();
}
