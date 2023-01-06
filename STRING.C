#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
int i;
clrscr();
for(i=0;i<19;i++)
{
fflush(stdin);
scanf("%c",&str[i]);
}
for(i=0;i<19;i++)
{
printf("%c",str[i]);
}
getch();
}

