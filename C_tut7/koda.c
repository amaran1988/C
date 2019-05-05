#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


void NoNewLine(char* string){
  char * isANewline;

  isANewline = strrchr(string, '\n');

  if(isANewline){

      *isANewline = '\0';

  }

}

void MakeLowerCase(char* string){

  int i = 0;

  while(string[i]){

      string[i] = tolower(string[i]);
      i++;

  }

}

void main(){

  char doYouwannaQuit[50];

  while(strcmp(doYouwannaQuit,"quit")){

      printf("Enter quit to quit: ");

      fgets(doYouwannaQuit,50,stdin);

      NoNewLine(doYouwannaQuit);

      MakeLowerCase(doYouwannaQuit);


  }
    printf("So finally you Quit !!!\n\n");


}
