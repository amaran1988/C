#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// Illustration of line buffering - very important to learn this !!!

void main(){


  char name[50];

  printf("What is your name?: ");

// Using gets and puts can be dangerous rather than fgets and fputs
  // gets(name);

  // puts("Hi there");

  // puts(name);

  fgets(name,50,stdin);

  fputs("Hi ", stdout);

  fputs(name, stdout);


}
