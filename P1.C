#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("enter a number ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
j==1||i==1||j==n||i==n||j==i||j==(n+1)-i?printf("*"):printf(" ");
}
printf("\n");
}
getch();
}