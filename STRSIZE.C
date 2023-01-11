#include<stdio.h>
#include<conio.h>
void main()
{
 char str[10];
 int i;
 clrscr();
  gets(str);

   for(i=0;str[i]!='\0';i++);
   printf("size of string is %d",i);
   getch();
}