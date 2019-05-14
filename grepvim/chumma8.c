#include <stdio.h>

foo-bar


void main(){


	typedef union {

		short individual;
		float ounce;
		float pound;

	} amount;

	printf("\n\n==================== The problem with the Union =====================\n\n");

	// amount orangeamt = {.ounce = 16};

	amount orangeamt = {.individual = 4};

 	orangeamt.pound = 1.5;

	// printf("Orange juice amount: %f, Size: %ld\n\n",orangeamt.ounce, sizeof(orangeamt.ounce));

	printf("The number of oranges: %d, Size: %ld\n\n", orangeamt.individual, sizeof(orangeamt.individual));

	printf("Orange juice amount: %f, Size: %ld\n\n",orangeamt.pound, sizeof(orangeamt.pound));


	printf("\n\n======================= Union within a Struct ===========================\n\n");


	typedef struct{

		char *brand;
		float kilo; // to show the need for union when several units are used.
		amount theAmount;

	} orangeProduct;


	orangeProduct productordered = {"Nagpur",.theAmount.ounce = 16};

	printf("You bought %f ounces of %s oranges\n\n", productordered.theAmount.ounce, productordered.brand);

	orangeProduct secondorder = {"Ooty",.theAmount.pound = 13};

	printf("You bought %.2f pounds of %s oranges\n\n", secondorder.theAmount.pound, secondorder.brand);

	orangeProduct thirdorder = {"kodai",25,.theAmount.individual = 25};

	printf("You got %d numbers of %s oranges weighing %.2f kilos\n\n",
	thirdorder.theAmount.individual, thirdorder.brand, thirdorder.kilo);





	printf("\n\n======================= Using ENUM ===========================\n\n");

	typedef enum{INDIV, OUNCE, POUND} quantity;

	quantity quantityType = OUNCE;

	if(quantityType == INDIV){

		printf("You bought %d individual oranges \n\n", orangeamt.individual);

	} else if(quantityType == OUNCE){

			printf("You bought %f ounces of oranges\n\n", orangeamt.ounce);

	} else {

					printf("You bought %.2f pounds of oranges\n\n", orangeamt.pound);
	}

}
