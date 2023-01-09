#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=4*n-1;i++)
  {
    for(j=1;j<=2*n-1;j++)
      {
	if(i<n)
	   {
	    (j==(n-1)+i||j==(n+1)-i)?printf("*"):printf(" ");
	   }
	else if(i>=n&&i<=3*n-1)
	   {
	    (i==n||j==1||i==3*n-1||j==2*n-1)?printf("*"):printf(" ");
	   }
	else if(i>3*n-1&&i<=4*n-1)
	   {
	     (i==(3*n-1)+j||i==(5*n-1)-j)?printf("*"):printf(" ");
	   }
      }
       printf("\n");
  }
  getch();
}


