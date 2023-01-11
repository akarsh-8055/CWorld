#include<stdio.h>
#include<conio.h>
void main()
{
 char str[20],p[20];
 int i;
 clrscr();
 gets(str);
 for(i=0;str[i]!='\0';i++);
 for(i=i-1;i>=0;i--)              //string size
   {
     printf("%c",str[i]);
   }
 puts(p);
 getch();
   }
