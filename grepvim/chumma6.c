// This is the First tutorial in C.

#include <stdio.h>

#include <string.h>

#define MYNAME "Amardeep A"

int globalVar = 100;

int main(){

     char middlename;

		 printf("\n");

     printf("What is your middle initial");

		 scanf("%c",&middlename);

		 char firstname[50], lastname[50];

		 printf("What is your name ?");

     scanf("%s %s", firstname, lastname);

     printf("The name is %s %c %s\n\n",firstname,middlename,lastname);

     int day, month, year;

     printf("What is your birth date?");

     scanf("%d/%d/%d",&day,&month,&year);

     printf("The birth date is %d/%d/%d\n\n",day,month,year);

}

Well that's the end of it

Well it is nice to have the quickfix window under control right?

