#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// Illustration of line buffering - very important to learn this !!!

void main(){

  char theChar;

  while((theChar = getchar()) != '~'){

    putchar(theChar);

    // while ((getchar()) != '\n');

  }

}
