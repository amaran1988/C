#include <stdio.h>


int main(){

	printf("\n");

	int secretNumber = 10, GuessNumber;

	while(1){

		printf("Guess my secret number: ");
		scanf(" %d",&GuessNumber);

		if(GuessNumber == secretNumber){

			printf("You nailed it\n\n");
			break;
						}

			}

}
