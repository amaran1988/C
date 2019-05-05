#include <stdio.h>



struct dogsfavs{

	char *food;
	char *friend;

};



typedef struct dog{

	const char *name;
	const char *breed;
	int heightincm;
	int weightinlbs;

	struct dogsfavs favoriteThings;

} dog;


void getdogfavs(dog theDog){

	printf("\n");

	printf("%s loves %s and his friend is %s\n\n", theDog.name, theDog.favoriteThings.food, theDog.favoriteThings.friend);

}



void setdogweight(dog *theDog, int newweight){
// Keep in mind we are using the * since we are importing a pointer from the main function

	(*theDog).weightinlbs = newweight;

	printf("The weight of %s has been changed to %d\n\n", (*theDog).name, (*theDog).weightinlbs);


}


void main(){

	dog buheera = {"buheera","German shepherd", 25, 9, {"Meat", "Pamela"}};

	getdogfavs(buheera);

	setdogweight(&buheera,20);   // This is a very important step to know
	                             //that the ampersand sign is to define a pointer
								// to update the value when functions outside the main are used

	printf("The weight of my chellam is %d\n\n",buheera.weightinlbs);



}
