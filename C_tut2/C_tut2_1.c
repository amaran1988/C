// This is the second tutorial in C 

#include <stdio.h>
#include <string.h>

int main(){

	printf("\n");

	int num1, num2;

	printf("Pick a number for num1 and num2: ");
	scanf("%d %d", &num1, &num2);

	printf("Is %d > %d: %s\n\n", num1, num2, (num1 > num2)? "true":"false");

	if(num1 > num2){

	  printf("%d is greater than %d\n\n", num1, num2);

	} else if(num1 < num2){

	     printf("%d is lesser than %d\n\n", num1, num2);

       	} else{ 

             printf("%d is equal to %d\n\n", num1,num2); 
	}


	printf("\n\n");

	int custage = 32;

	printf("What is the age of the customer?: ");
	scanf("%d",&custage);

	if(custage > 21 && custage < 45) printf("They are allowed\n");
	else printf("They are not allowed !!!\n\n");


	printf("! turns a true into a false: %d\n\n",!1);

}
