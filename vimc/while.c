// Collatz conjecture

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	unsigned int n, o_num;
	int iteration;

	printf("Enter a positive number n: ");

	scanf("%u",&n);
	o_num = n;
	iteration = 0;

	printf("");
/*	
	while(n > 1){	
	
		if((n%2)==0){
		
			n = n/2;

			printf("n: %d\n",n);

			iteration += 1;

		} else if((n%2) != 0) {
		
			n = ((n*3)+1);

			printf("n: %d\n",n);

			iteration += 1;
		}

	}

*/

	
	do{	
	
		if((n%2)==0){
		
			n = n/2;

			printf("n: %d\n",n);

			iteration += 1;

		} else if((n%2) != 0) {
		
			n = ((n*3)+1);

			printf("n: %d\n",n);

			iteration += 1;
		}

	} while(n > 1);



		printf("\n\nThe number of iterations required for the collatz conjecture of %u is %d\n\n",o_num,iteration);

		return 0;

}

