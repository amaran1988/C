// fgets instead of scanf, string operators

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){


	printf("\n");

	char wholename[12] = "Amardeep";

	int primenumbers[3] = {2,3,5};

	int morePrimes[] = {13,17,19,23};

	printf("The first prime number in the list is: %d\n\n", primenumbers[0]);

	char city[] = "Moscow";

	char yourcity[30];

	printf("which city do you live in?");

	fgets(yourcity, 30, stdin);

	printf("Hello %s\n\n",yourcity);

// Simply to limit the new lines we use the for-if function

	for(int i=0; i < 30; i++){

          if(yourcity[i] == '\n'){

             yourcity[i] = '\0';

		break;

		}

 	}

	printf("Hello %s\n\n", yourcity);


	printf("Is your city Moscow? %d\n\n", strcmp(yourcity,city));


	char yourstate[] = ", TamilNadu";

	strcat(yourcity, yourstate);

	printf("You live in %s\n\n",yourcity);

	printf("Letters in Moscow: %d\n\n", (int)strlen(city));

	strncpy(yourcity, "Madras", sizeof(yourcity));

	printf("New city is %s\n\n", yourcity);

}
