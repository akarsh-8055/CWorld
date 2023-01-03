#include<stdio.h>
#include<conio.h>
void main()
{
char p;
clrscr();
printf("enter a character\t");
fflush(stdin);
scanf("%c",&p);
if(p>=65&&p<=90)
{
p=p+32;
printf("%c",p);
}
else if(p<=122&&p>=97)
{
p=p-32;
printf("%c",p);
}
getch();
}

