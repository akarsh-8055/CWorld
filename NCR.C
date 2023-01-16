#include<stdio.h>
#include<conio.h>
void main()
{
int ncr(int n,int r);
int fact(int);
 int n,r;
 clrscr();
 printf("enter n and r values");
 scanf("%d%d",&n,&r);
 printf("value of npr is %d",ncr(n,r));
 getch();
}
int fact(int n)   // here n are different var n from different fn
{
  int i,fact=1;
  for(i=1;i<=n;i++)
   {
    fact=fact*i;
   }
   return fact;
}
int ncr(int n,int r)//here n & r var different from main fn var n & r
{
 int f;
  f=fact(n)/(fact(r)*fact(n-r));
  return f;
}

