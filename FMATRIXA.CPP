//addition of two m,atrix using function
#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10][10],b[10][10],c[10][10],x,y;
 clrscr();
 void input(int[][10],int,int);
 void output(int[][10],int,int);
 void add(int[][10],int[][10],int[][10],int,int);
 printf("enter number of rows and colomn for");
 scanf("%d%d",&x,&y);
 printf("input of first matrix");
 input(a,x,y);
 printf("input of 2nd matrix");
 input(b,x,y);
 printf("output of 1st matrix \n");
 output(a,x,y);
 printf("output of2nd matrix\n");
 output(b,x,y);
 add(a,b,c,x,y);
 printf("result\n");
 output(c,x,y);
 getch();
 }
 void input(int a[10][10],int x,int y)
 {
  int i,j;
  for(i=0;i<x;i++)
   {
    for(j=0;j<y;j++)
     {
      scanf("%d",&a[i][j]);
     }
   }
 }
 void output(int m[10][10],int x,int y)
  {
   int i,j;
   for(i=0;i<x;i++)
    {
     for(j=0;j<y;j++)
      {
       printf("%d ",m[i][j]);
      }
       printf("\n");
     }
   }
  void add(int a[10][10],int b[10][10],int c[10][10],int x,int y)
    {

     int i,j;
      for(i=0;i<x;i++)
       {
	for(j=0;j<y;j++)
	 {

	  c[i][j]=a[i][j]+b[i][j];
     }
    }
  }
