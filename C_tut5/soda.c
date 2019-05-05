#include <stdio.h>

#include <stdlib.h>

// the '&' is used to get the address of that variable whereas the "*" is used to access and manipulate the address of that variable. This is predominantly used when variables jump between functions, so hence we use its address rather than the name.

void generateTwoRandomNums(int *rand1, int *rand2){



	*rand1 = rand() % 50 + 1;

	*rand2 = rand() % 50 + 1;

	printf("The rand1 in the function is: %d\n\n", *rand1);
	printf("The rand2 in the function is: %d\n\n", *rand2);
}



void editMessageSent(char* message, int size){

	char newmessage[] = "Amardeep";

	if(size > sizeof(newmessage)){

		for(int i = 0; i < sizeof(newmessage); i++){

			message[i] = newmessage[i];

		}

	} else {

		printf("New message is too big\n\n");
	}

}


void main(){

	printf("\n\n================= Indexing using pointers =====================\n\n");


	int primenumbers[] = {2,3,5,7};

	printf("First index: %d\n\n",primenumbers[1]);

	printf("First index: %d\n\n",*(primenumbers+1));



	printf("\n\n===================== Value and address =======================\n\n");


	char * students[4] = {"Sally", "Mark","Paul","Sue"};

	for(int i = 0; i < 4; i++){

		printf("%s : %d\n\n", students[i], &students[i]);
	}



	printf("\n\n======== Export Import of values between functions ===============\n\n");


	int rand1 = 0, rand2 = 0;

	printf("The rand values in the main before function:\n\n");

	printf("rand1: %d\n\n", rand1);

	printf("rand2: %d\n\n", rand2);

	generateTwoRandomNums(&rand1,&rand2);

	printf("The rand values in the main after function:\n\n");

	printf("rand1: %d\n\n", rand1);

	printf("rand2: %d\n\n", rand2);




	printf("\n\n============== Change message between functions =================\n\n");


	char randommessage[] = "Edit my function";

	printf("Old message: %s \n\n", randommessage);

	editMessageSent(randommessage, sizeof(randommessage));

	printf("New message: %s \n\n", randommessage);


}
