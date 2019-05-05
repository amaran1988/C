#include <stdio.h>

int main(){

	printf("\n");

	int custAge;

	printf("What is the customer's age: ");

	scanf("%d",&custAge);

	char* legalAge = (custAge > 21) ? "true":"false";

	printf("Is the customer of legal Age?: %s\n\n",legalAge);

	int numProducts;

	printf("How many products did you buy: ");

	scanf("%d",&numProducts);

	printf("I bought %s products\n\n",(numProducts > 10) ? "many":"not too many");


}
