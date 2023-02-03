//add element of 1st digonal element and subtract second digonal element  with absolue value
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],i,j,r,c,sum=0,s=0;
clrscr();
printf("enter the number of rows and colomn");
scanf("%d%d",&r,&c);
printf("input element");
for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
   {
    scanf("%d",&a[i][j]);
   }
 }
 printf(" \n display matrix\n");
  for(i=0;i<r;i++)
   {
     for(j=0;j<c;j++)
      {
       printf("%d\t",a[i][j]);
      }
      printf("\n");
   }
   for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
      {
       if(i==j)
	{
	 sum=sum+a[i][j];
	 break;
	}

      }
    }
	for(i=0;i<r;i++)
	 {
	  for(j=c-1;j>=0;j--)
	   {
	    if((i+j)==c-1)
	     {
	      s=abs(s-a[i][j]);

	      }
	     }
	   }


    printf("\n%d",sum);
    printf("\n%d",s);
    //printf("\n%d",s);
  getch();
 }

