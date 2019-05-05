
#include <stdio.h>



struct dog{

	const char *name;
	const char *breed;
	int heightincm;
	int weightinlbs;

};


void getdoginfo(struct dog thedog){

	printf("\n");
	printf("Name: %s\n\n",thedog.name);
	printf("Breed: %s\n\n",thedog.breed);
	printf("Height in cm: %d\n\n",thedog.heightincm);
	printf("Weight in lbs: %d\n\n",thedog.weightinlbs);

}


void getMemoryLocations(struct dog thedog){

	printf("Name Location: %s\n\n", thedog.name);
	printf("Breed Location: %s\n\n", thedog.breed);
	printf("Height Location: %p\n\n", &thedog.heightincm);
	printf("Weight Location: %p\n\n", &thedog.weightinlbs);
}

void main(){

	struct dog bugee = {"Bugeera", "Hybrid", 90, 265};

	getdoginfo(bugee);

	struct dog bugee2 = bugee;

	getMemoryLocations(bugee);

	getMemoryLocations(bugee2);


}
