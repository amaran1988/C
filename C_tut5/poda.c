#include <stdio.h>

#include <stdlib.h>


void main(){


	int rand1 = 12, rand2 = 15;

// to print the hexadecimal version of the values
	printf("rand1 = %p: rand2 = %p\n\n",
              &rand1, &rand2);


// to print the decimal version of the values
	printf("rand1 = %d: rand2 = %d\n\n",
              rand1, rand2);

	printf("Size of int %ld\n\n",sizeof(rand1)); // ld stands for long int

	int  *pRand1 = &rand1;

// What the hell is a pointer
	printf("Pointer = %p\n\n",
              pRand1);


// What the hell is a pointer
	printf("Pointer = %d\n\n",
              rand1);

	printf("Value = %d\n\n",*pRand1);

}
