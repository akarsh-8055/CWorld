#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],n,i,temp,p;
 clrscr();
 printf("enter the value of searching element\t");
 scanf("%d",&p);
 printf("enter the size in in array\t");
 scanf("%d",&n);
 printf("\nenter the value\t");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("print the values \t");
 for(i=0;i<n;i++)
  {
   printf("%d\t",a[i]);
  }
  for(i=0;i<n;i++)
   {
    temp=a[i];
      if(temp==p)
	 {
	   printf("value of p is in array\n");
	   break;
	 }
   }
    if(temp!=p)
     printf("\nvalue of p is not in array");

  getch();
  }