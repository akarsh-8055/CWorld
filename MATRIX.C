#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,r,c;
clrscr();
printf("enter the number of rows\n and colomn\t");
scanf("%d%d",&r,&c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("printf the values\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
 printf("%d\t",a[i][j]);
}
printf("\n");
}
 getch();
 }