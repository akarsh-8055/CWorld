#include<stdio.h>
#include<conio.h>
void main()
{
int a,c,op,p,b;
int fact(int);
int sumdigit(int);
int power(int,int);
clrscr();
printf("\npress 1 for factorial\n press 2 for find sum of digit\n press 3 for calculate power\n");
printf("enter opertion  ");
scanf("%d",&op);
switch(op)
{
case 1: printf("enter a number to find factorial ");
	scanf("%d",&a);
	printf("factorial of number %d is %d ",a,fact(a));
	break;
case 2: printf("enter a digit to find their sum ");
	scanf("%d",&c);
	printf("sum of digiit %d is %d",c,sumdigit(c));
	break;
case 3:
       {
	printf("enter base of number and their power");
	scanf("%d%d",&b,&p);
	printf("base is %d power is %d and their result is %d ",b,p,power(b,p));
	break;
       }
default:
	printf("wrong choice");
	break;
}
getch();
}
int fact(int f)                // factorial function definition
 {
   int i,fact=1;
    for(i=1;i<=f;i++)
      {
	fact=fact*i;
      }
      return fact;
 }
int sumdigit(int n)          //sum of digit function definition
 {
  int x,sum=0;
   while(n!=0)
   {
    x=n%10;
    sum=sum+x;
    n=n/10;
   }
   return sum;
 }
int power(int x,int y)            //definition of power function
  {
    int i,m=1;
     for(i=1;i<=y;i++)
     {
      m=m*x;
     }
     return m;
  }
