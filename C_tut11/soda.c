#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

/* Multi line comment - didnt know till now - jeez


int basetodecimal(char * number, int basefrom, int sizeofnum){

      int PowerOf = 0;
      int result = 0;

  for(int i = sizeofnum-2; i>=0; --i){

        if(isalpha(number[i])){

// Convert the letter to the correct character code and subtract
// by 87 to make 'a' = 10 along with the other letters

          int charcode = ((int)tolower(number[i])) - 87;

          result += (number[i] - '0') * pow(basefrom,PowerOf);

        } else {

        result += (number[i] - '0') * pow(basefrom,PowerOf);

      }
        PowerOf++;
  }

      printf("%s of base %d is equal to %d in base 10\n",
       number, basefrom, result);

      return result;

}


*/

char * convertion_func(unsigned int numbertochange, int base,
   char *pConvertedNumber){

    char allvalue[] = "0123456789abcdef";

    if (base < 2 || base > 16){

      printf("Arey Give something between 2 and 16 na ? ");
      exit(1);

    }

      do {

        int value;

        value = numbertochange % base;

        pConvertedNumber -= 1; //to move to the left side

        *pConvertedNumber = allvalue[value];

        numbertochange /= base;

      }while(numbertochange != 0);

        return pConvertedNumber;
}



int main(void){


    unsigned int numbersix = 6; //110
    unsigned int numberseven = 7; //111

    char *pConvertedNumber;
    char buffer[33];

    pConvertedNumber = &buffer[sizeof(buffer)-1];
    *pConvertedNumber = '\0';

    unsigned int andSolution = numbersix & numberseven;
    unsigned int orSolution = numbersix | numberseven;
    unsigned int exOrSolution = numbersix ^ numberseven;

    // Need to debug these two: Not working-----
    // unsigned int inverseSolution = ~numbersix;
    // unsigned int shifttwobytes = numbersix << 2;


    printf("%s & ", convertion_func(numbersix, 2, pConvertedNumber));
    printf("%s = ", convertion_func(numberseven, 2, pConvertedNumber));
    printf("%s\n\n", convertion_func(andSolution, 2, pConvertedNumber));

    printf("%s | ", convertion_func(numbersix, 2, pConvertedNumber));
    printf("%s = ", convertion_func(numberseven, 2, pConvertedNumber));
    printf("%s\n\n", convertion_func(orSolution, 2, pConvertedNumber));

    printf("%s ^ ", convertion_func(numbersix, 2, pConvertedNumber));
    printf("%s = ", convertion_func(numberseven, 2, pConvertedNumber));
    printf("%s\n\n", convertion_func(exOrSolution, 2, pConvertedNumber));

    // printf("~%s = ", convertion_func(numbersix, 2, pConvertedNumber));
    // printf("%s\n\n", convertion_func(inverseSolution, 2, pConvertedNumber));
    // printf("The negative of %s is: %s", numbersix, (inverseSolution+1));

    // printf("%s << 2 => %s = %d\n\n", convertion_func(numbersix, 2, pConvertedNumber),
            // convertion_func(shifttwobytes, 2, pConvertedNumber), shifttwobytes);

    unsigned int analyzeMyBits = 170; //10101010
    unsigned int mask = 15; //00001111
    unsigned int last4bits = analyzeMyBits & mask;

    printf("Last 4 bits: %s\n\n",convertion_func(last4bits,2,pConvertedNumber));





    return 0;
}
