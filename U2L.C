#include<stdio.h>
#include<conio.h>
void main()
{
char upper(char);
char c;
clrscr();
printf("character in capital letter ");
scanf("%c",&c);
printf("upper to lower form of character is %c",upper(c));
getch();
}
char upper(char p)
{
if(p>=65&&p<=90)
 {
  p=p+32;
 }
 return p;
}