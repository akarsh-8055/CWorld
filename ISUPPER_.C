#include<stdio.h>
#include<conio.h>
void main()
{
int upper(char);
char ch;
int s;
clrscr();
printf("enter character");
scanf("%c",&ch);
s=upper(ch);
s==1?printf("character is in upper"):printf("character is not in upper");
getch();
}
int upper(char ch)
{
 if((ch>=65)&&(ch<=90))
   return 1;
  else
    return 0;
}
