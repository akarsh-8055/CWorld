//add matrix all rows and colomns
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10][10],x,y;
  clrscr();
  void matrix(int[][10],int,int);
  void output(int[][10],int,int);
   void row(int[][10],int,int);
   void colomn(int[][10],int,int);
  printf("enter number of rows and colomns ");
  scanf("%d%d",&x,&y);
  printf("enter element of matrix ");
  matrix(a,x,y);
  printf("print matrix \n");
  output(a,x,y);
  printf("sum of rows\n ");
  row(a,x,y);
  printf("\nsum of colomns\n");
  colomn(a,x,y);
  getch();
}
void matrix(int a[10][10],int x,int y)
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
 void output(int a[10][10],int x,int y)
  {
   int i,j;
   for(i=0;i<x;i++)
    {
     for(j=0;j<y;j++)
      {
       printf("%d ",a[i][j]);
      }
      printf("\n");
    }
  }
 void row(int a[10][10],int x,int y)
 {
 int i,j,sum=0;
  for(i=0;i<x;i++)
  {
   for(j=0;j<y;j++)
    {
      sum=sum+a[i][j];
    }
    printf("%d ",sum);
    sum=0;
   }
 }
 void colomn(int a[10][10],int x,int y)
  {
   int i,j,sum=0;
   for(j=0;j<y;j++)
    {
     for(i=0;i<x;i++)
      {
       sum=sum+a[i][j];
      }
      printf("%d ",sum);
       sum=0;
     }
   }