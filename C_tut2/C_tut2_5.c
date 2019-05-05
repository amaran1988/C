// Can also compile with gcc -std=c99 C_tut2_5.c -o result

#include <stdio.h>



void main(){

         printf("\n");

         for(int counter=0; counter <=20; counter++){

             printf("%d ",counter);
          }

		printf("\n\n");

	 for(int counter2 = 0; counter2 <= 40; counter2++ ){

             if((counter2 % 2) ==0) continue;

             printf("%d ",counter2);

          }
		printf("\n\n");


}
