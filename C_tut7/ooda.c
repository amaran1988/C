#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// Illustration of line buffering - very important to learn this !!!

void main(){

  char * randomstrings = "Hi there, This is me. Amar !!!";

// The short cut
  // while(*randomstrings){
  //
  //     putchar(*randomstrings++);
  //
  // } printf("\n");


// the long way
  // int i = 0;
  //
  // while(randomstrings[i] != '\0'){
  //
  //   putchar(randomstrings[i++]);
  //
  // } printf("\n");

// My way

  for(int i = 0; i <= strlen(randomstrings); i++){

      putchar(randomstrings[i]);

  } printf("\n");




}
