#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],sum=0,size;
void inputarray(int[],int);
void outputarray(int[],int);
int sumarray(int[],int);
clrscr();
printf("enter elements");
scanf("%d",&size);
inputarray(a,size);
outputarray(a,size);
sum=sumarray(a,size);
printf("%d",sum);
getch();
}
int sumarray(int a[],int size)
{
int i,sum=0;
for(i=0;i<size;i++)
{
sum=sum+a[i];
}
return sum;
}
void inputarray(int a[],int size)
{
int i;
for(i=0;i<size;i++)
scanf("%d",&a[i]);
}
void outputarray(int a[],int size)
{
int i;
for(i=0;i<size;i++)
{
printf("%d\n",a[i]);
}

}
