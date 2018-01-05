

//here the shared folder is in "computer21"

#include <stdio.h>

#include<conio.h>

#include<process.h>

#include<string.h>



char c[30],ch[70];

FILE *stream,*stream1;



void read(void)

{ stream1 = fopen("//computer21/s/read.txt","r");

       fread(ch,1000,1,stream1);

		  printf("%s",ch);

		 fclose(stream1); }



void clearhist()

{ stream=fopen("//computer21/s/write1.txt","w");

		      fprintf(stream," ");

		      fclose(stream); }





void main ()

{  int i,d=0;

   char temp,name[10];

   clrscr ();

   gotoxy(10,12);

   printf("Enter Name:");

   scanf("%s",name);

   clrscr ();

   for(i=0;i<=100;i++)

      { clrscr ();

		 read();

		 gotoxy(1,21);

		 printf("--------------Press ENTER Without Message to Check For New
Message--------------");

		 gotoxy(1,23);

		 printf("Enter the Message(30 chars max) : ");

		 gets(c);

		 //checking message

		 if((c[0]=='e')&&(c[1]=='x')&&(c[2]=='i')&&(c[3]=='t'))

		   {  clearhist ();

		      exit(0);  }

		 //checking message for "enter"

		 if(c[0]!='
