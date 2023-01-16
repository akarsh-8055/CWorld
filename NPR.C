#include<stdio.h>
#include<conio.h>
void main()
{
int npr(int,int);
int fact(int);
int n,r;
clrscr();
printf("rnter n and r value");
scanf("%d%d",&n,&r);
//int npr(int,int);      //we can't declare function here
//int fact(int);
printf("the result of npr is %d",npr(n,r));
getch();
}
int fact(int a)
{
int i,fact=1;
for(i=1;i<=a;i++)
 {
  fact=fact*i;
 }
  return fact;
}
int npr(int x,int y)
{
int f;
 f=fact(x)/fact(x-y);
 return f;
}


