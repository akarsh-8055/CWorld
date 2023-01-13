#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[10],max;
clrscr();
printf("enter array values");
for(i=0;i<10;i++)
{
scanf("%d",&a[10]);
}
for(i=0;i<10;i++)
{
printf("%d",a[i]);
}
max=a[0];
for(i=1;i<10;i++)
{
max<a[i];
}
printf("maximum number is in array is %d",max);
}
getch();
}
