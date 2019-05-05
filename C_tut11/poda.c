#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

/* Multi line comment - didnt know till now - jeez
*/

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


char * convertion_func(unsigned int numbertochange, int base){

    char buffer[33];
    char *pConvertedNumber;
    char allvalue[] = "0123456789abcdef";

    if (base < 2 || base > 16){

      printf("Arey Give something between 2 and 16 na ? ");
      exit(1);

    }

      pConvertedNumber = &buffer[sizeof(buffer)-1];

      do {

        int value;

        value = numbertochange % base;

        pConvertedNumber -= 1; //to move to the left side

        *pConvertedNumber = allvalue[value];

        numbertochange /= base;

      }while(numbertochange != 0);


        printf("%s", pConvertedNumber);

        return pConvertedNumber;
}


int main(void){


    unsigned int number = 60;
    int base;

    printf("%d in base 2 is: ", number);
    convertion_func(number, 2);

    printf("\n%d in base 8 is: ", number);
    convertion_func(number, 8);

    printf("\n%d in base 16 is: ", number);
    convertion_func(number, 16);

    printf("\n");

    char numtoconv[] = "74";

    basetodecimal(numtoconv, 8, sizeof(numtoconv));

    char numtoconvert2[] = "3C";

    basetodecimal(numtoconvert2, 16, sizeof(numtoconvert2));

    // Work Out the Key Codes for Hexadecimals
    printf("\n");
    printf("Key codes for Hexadecimals (something to keep in mind):\n");
    printf("A : %d\n", 'A');
    printf("a : %d\n", 'a');
    printf("b : %d\n", 'b');
    printf("c : %d\n", 'c');
    printf("d : %d\n", 'd');
    printf("e : %d\n", 'e');
    printf("f : %d\n", 'f');

    return 0;

}
