#include<stdio.h>
#include<conio.h>
void main()
{
int age;
float amt,p;
char g;
clrscr();
printf("enter the age\t");
scanf("%d",&age);
printf("enter M for male\t\n F for female\t\n s for smoker\t");
fflush(stdin);
scanf("%c",&g);
switch(g)
{
case 'm':
  if(age>=21&&age<=30)
     {
       printf("amount is 10000");
     }
	 else if(age>=31&&age<=40)
	     {
	       printf("amount is 15000");
	     }
	 else if(age>=41&&age<=50)
	     {
	       printf("amount is 20000");
	     }
	else if(age>=51&&age<=60)
	     {
	       printf("amount is 40000");
	     }
	else if(age>=61)
	     {
	       printf("insurance is not possible");
	     }
  break;
case 'f':
	   amt=10000;
	   if(age>=21&&age<=30)
	    {
	      p=(amt*10)/100.0;
	      amt=10000-p;
	      printf("amount is %.2f",amt);
	    }
	  else if(age>=31&&age<=40)
	    {
	      amt=15000;
	      p=(amt*10)/100.0;
	      amt=15000-p;
	      printf("amount is %.2f",amt);
	    }
	  else if(age>=41&&age<=50)
	    {
	     amt=20000;
	     p=(amt*10)/100.0;
	     amt=20000-p;
	     printf("amount is %.2f",amt);
	    }
	  else if(age>=51&&age<=60)
	    {
	     amt=40000;
	     p=(amt*10)/100.0;
	     amt=40000-p;
	     printf("amount is %.2f",amt);
	    }
	  else if(age>=61)
	    {
	     printf("insurance is not possible");
	    }
	  break;
case 's':
	   amt=10000;
	   if(age>=21&&age<=30)
	    {
	      p=(amt*10)/100.0;
	      amt=10000+p;
	      printf("amount is %.2f",amt);
	    }
	  else if(age>=31&&age<=40)
	    {
	      amt=15000;
	      p=(amt*10)/100.0;
	      amt=15000+p;
	      printf("amount is %.2f",amt);
	    }
	  else if(age>=41&&age<=50)
	    {
	     amt=20000;
	     p=(amt*10)/100.0;
	     amt=20000+p;
	     printf("amount is %.2f",amt);
	    }
	  else if(age>=51&&age<=60)
	    {
	     amt=40000;
	     p=(amt*10)/100.0;
	     amt=40000+p;
	     printf("amount is %.2f",amt);
	    }
	  else if(age>=61)
	    {
	     printf("amount is %.2f",amt);
	    }
	  break;
  default:
  printf("wrong choice");
  break;
}
  getch();

  }