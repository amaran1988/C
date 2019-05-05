// Program to explain arrays using fibonacci sequence

#include <stdio.h>


int main(){

	unsigned int fib_array[100];
	int n;

	printf("Enter a value for n to get the fibonacci series: ");
	scanf("%d", &n);

	fib_array[0] = 0;

	fib_array[1] = 1;

	printf("\nThe term %d: %d\n",1, fib_array[0]);
	printf("The term %d: %d\n",2, fib_array[1]);

	for (int i=2; i<n; i++){

			fib_array[i] = fib_array[i-1] + fib_array[i-2];
			printf("The term %d: %d\n",i+1, fib_array[i]);
	}

	return 0;

}
