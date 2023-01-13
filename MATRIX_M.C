#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],i,j,r1,r2,c1,c2,k,b[10][10],c[10][10];
clrscr();
printf("enter the number of rows and colomn");
scanf("%d\t%d",&r1,&c1);
printf("enter the values of first matrix\n");
for(i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++)
      {
	scanf("%d",&a[i][j]);
      }
  }
for(i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++)
      {
	printf("%d\t",a[i][j]);
      }
      printf("\n");
  }
printf("enter the number of rows and colomn of second matrix");
scanf("%d%d",&r2,&c2);
printf("enter the values of matrix");
for(i=0;i<r2;i++)
  {
    for(j=0;j<c2;j++)
      {
	scanf("%d",&b[i][j]);
      }
  }
for(i=0;i<r2;i++)
  {
    for(j=0;j<c2;j++)
     {
       printf("%d\t",b[i][j]);
     }
    printf("\n");
  }
if(c1!=r2)
   {
      printf("matrix is not possible");
   }
else
   {
     printf("result of matrix multiplication\n");

      for(i=0;i<r1;i++)
	{
	  for(j=0;j<c2;j++)
	    {
	     c[i][j]=0;
	      for(k=0;k<r2;k++)
		{
		  c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
		}
	     }
	  }
      }

      for(i=0;i<r1;i++)
       {
	 for(j=0;j<c2;j++)
	   {
	     printf("%d\t",c[i][j]);
	   }
	   printf("\n");
       }
  getch();
  }
