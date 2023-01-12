#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,temp,n,p;
clrscr();
printf("enter the size of array");
scanf("%d",&n);
for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
printf("original array is ");
for(i=0;i<n;i++)
 {
  printf("%d\t",a[i]);
 }
 for(p=1;p<n;p++)
 {
   for(i=0;i<n-p;i++)
   {
    if(a[i]>a[i+1])
      {
       temp=a[i];
       a[i]=a[i+1];
       a[i+1]=temp;
      }
   }
 }
  printf("\nsorted array is\n");
  for(i=0;i<n;i++)
  {
   printf("%d\t",a[i]);
  }
  getch();

}


