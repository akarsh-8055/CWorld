//result of fibonacci using recursion
#include<stdio.h>
#include<conio.h>
void main()
{
int fib(int);
int n,res;
clrscr();
printf("enter number");
scanf("%d",&n);
res=fib(n);
printf("result is %d",res);
getch();
}
int fib(int p)
{
  if(p<=2)
   return 1;
  else
    return fib(p-1)+fib(p-2);
}
