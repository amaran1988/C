
#include <stdio.h>
#include <stdlib.h>


struct product {

		float price;
		char productname[30];

};

int main(){

		struct product *pProducts;

		int i,j;

		int numproducts;i

		printf( "HI there" );

		scanf("%d", &numproducts);

		pProducts = (struct product *) malloc(numproducts * sizeof(struct product));

		for(i = 0; i < numproducts; i++){

				printf("Enter the name of the product:");

				scanf("%s", (pProducts+i) -> productname);

				printf("Enter the price of the product: ");

				scanf("%f", &(pProducts+i) -> price);

		}

		printf("Products stored\n\n");
		printf("List of Products:\n");

		for(j = 0; j < numproducts; j++){

				printf("%d.\t%s\t%.2f\n",j+1,(pProducts+j) -> productname, (pProducts+j) -> price);

		}

		free(pProducts);

		return 0;

}


