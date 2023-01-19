//factorial program using recursion
#include<stdio.h>
#include<conio.h>
void main()
{
int fact(int);
int n,res;
clrscr();
printf("enter number");
scanf("%d",&n);
res=fact(n);
printf("factorial is %d",res);
getch();
}
int fact(int p)
{
if(p==0)
 return 1;
else
  return p*fact(p-1);
}
