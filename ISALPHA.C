#include<stdio.h>
#include<conio.h>
void main()
{
void alpha(char);
char ch;
clrscr();
printf("enter value ");
fflush(stdin);
scanf("%c",&ch);
alpha(ch);
getch();
}
void alpha(char p)
{
  if((p>=65&&p<=90)||(p>=97&&p<=122))
   {
    printf("value is in character ");
   }
  else
   {
    printf("value is not in character");
   }
}
