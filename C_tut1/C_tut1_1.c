// This is the First tutorial in C. 

#include <stdio.h>
#include <string.h>

#define MYNAME "Amardeep A"


int globalVar = 100;

int main(){

    char first_1Letter = 'D';

    int age = 30;

    long int superBigNum = -327670000;

    float piValue = 3.14159;

    double reallyBigPi = 3.141591973746473;
    
    printf("\n");

    printf("This is to print to the screen\n\n");

    printf("I am %d years old\n\n",age);

    printf("Big Number %ld\n\n",superBigNum);

    printf("Pi = %.5f\n\n",piValue);

    printf("The first letter in my name is %c\n\n",first_1Letter);

    printf("My name is %s\n\n","Derek");

    char myName[] = "Amar deep";

    strcpy(myName, "RAMANA");

    printf("My name is %s\n\n",myName);

	


}
