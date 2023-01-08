#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("enter a number ");
scanf("%d",&n);
for(i=1;i<=2*n-1;i++)
  {
    for(j=1;j<=2*n-1;j++)
      {
	if(i<5)
	 {
	  j==(n-1)+i||j==(n+1-i)?printf("*"):printf(" ");
	 }
	else
	 {
	   (i==1||j==1||j==2*n-1||i==2*n-1)?printf("*"):printf(" ");
	 }
      }
    printf("\n");
  }
  getch();
}
