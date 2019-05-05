#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


void getCharInfo(){

  char theChar;

  while((theChar = getchar()) != '\n'){


    printf("Letter or number: %d\n\n", isalnum(theChar));
    printf("Alphabetical: %d\n\n", isalpha(theChar));
    printf("Blank: %d\n\n", isblank(theChar));
    printf("Digit: %d\n\n", isdigit(theChar));
    printf("Anything but space: %d\n\n", isgraph(theChar));
    printf("Lower case: %d\n\n", islower(theChar));
    printf("Upper case: %d\n\n", isupper(theChar));
    printf("Control: %d\n\n", iscntrl(theChar));
    printf("Any space: %d\n\n", isspace(theChar));
    printf("Punctuation: %d\n\n", ispunct(theChar));

  }

}


void main(){

  getCharInfo();

}
