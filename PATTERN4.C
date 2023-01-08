#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
clrscr();
printf("enter the number ");
scanf("%d",&n);
for(i=1;i<=n;i++)
  {
    for(j=1;j<=2*n-1;j++)
      {
	j==(n+1)-i||j==(n-1)+i?printf("*"):printf(" ");
      }
      printf("\n");
  }
getch();
}