#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("enter the number of rows \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
      {
	j==n||i==n||j==n-i+1?printf("\3"):printf(" ");
      }
    printf("\n");
  }
  getch();
  }