// Global and local variables explanation

#include <stdio.h>

// Needed for exit()
#include <stdlib.h>
#include <string.h>


int globalVar = 0;

int addTwoNums(int num1, int num2){

   return num1 + num2;


}


void changevariables(){

  int age = 10;

  printf("Age inside the function: %d\n\n", age);

  globalVar = 500;

  printf("GlobalVar inside a function: %d\n\n", globalVar);

}


void main(){


   printf("\n");

   int total = addTwoNums(5,6);

   printf("The sum is %d\n\n",total);

   int age = 20;

   globalVar = 60;

   printf("age before a call to a function = %d\n\n", age);

   printf("globalVar before a call to the function = %d\n\n", globalVar);

   changevariables();

   printf("Age after the function: %d\n\n",age);

   printf("Global variable after calling the function: %d\n\n", globalVar);



}

