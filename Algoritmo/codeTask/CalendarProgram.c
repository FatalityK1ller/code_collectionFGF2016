

#include<conio.h>

int day(int m1,int y1)
{
  int d;
  if(m1==1 || m1==3 || m1==5 || m1==7 || m1==8 || m1==10 || m1==12)
		 d=31;
  else if(m1==4 || m1==6 || m1==9 || m1==11)
		 d=30;
  else if((y1%100!=0 && y1%4==0) || y1%400==0)
		 d=29;
  else
		 d=28;
  return d;
}

void main()
{
  long unsigned int t;
  unsigned int y,y1,m,m1,d,da,i,j,k;
  char
a[12][20]={"January","February","March","April","May","June","July","Augus
t","September","October","November","December"};
  clrscr();
  textcolor(CYAN);
  cprintf("Enter the year: ");
  scanf("%4u",&y);
  if(y<0)
		 y=-y;
  cprintf("Enter the month: ");
  scanf("%2u",&m);
  if(m<=0 || m>=13)
		 m=1;
  clrscr();
  gotoxy(32,2);
  cprintf("Calendar");
  y1=0;
  t=0;
  while(y1<y)
  {
		 if((y1%100!=0 && y1%4==0) || y1%400==0)
		   t=t+366;
		 else
		   t=t+365;
		 y1++;
  }
  m1=1;
  while(m1<m)
  {
		 d=day(m1,y);
		 t=t+d;
		 m1++;
  }
  d=t%7;
  printf("Year: '%u'",y);
  printf("Month: '%s'",a[m-1]);

printf("%6s%6s%6s%6s%6s%6s%6s","Sun","Mon","Tue","Wed","Thu","Fri","Sat");
  textcolor(GREEN);
  k=1;
  for(i=1;i<=day(m,y);i++,k++)
  {
		 if(i==1)
		 {
		   if(d==0)
		   {
		     for(j=1;j<7;j++,k++)
		       printf("%6s","");
		   }
		   else
		   {
		      for(j=1;j<d;j++,k++)
		 		 printf("%6s","");
		   }
		 }
		 cprintf("%6d",i);
		 if(k%7==0)
		   printf("

");
  }
  gotoxy(27,22);
  cprintf("www");

  getch();
}
