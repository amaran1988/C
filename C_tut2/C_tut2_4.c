#include <stdio.h>



void main(){


	printf("\n");


	char sizeOfshirt;

	do{

		printf("What is the size of the shirt (S,M,L): ");

		scanf(" %c", &sizeOfshirt);



          }while(sizeOfshirt != 'S' && sizeOfshirt != 'M' && sizeOfshirt != 'L');




}
