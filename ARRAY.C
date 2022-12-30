#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[10];
clrscr();
printf("enter the values");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
printf("%d\t%d\n",i,a[i]);
}
getch();
}

