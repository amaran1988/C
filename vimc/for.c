// Program to explain "for" loop by factorial example


#include <stdio.h>


int main(){

	int n, fact = 1;

	printf("Enter a positive number: ");
	scanf("%d", &n);

	for(int i=1; i<n; i++){
	
	 		fact *= (i+1);
		
		}

	printf("\nThe Factorial of %d is %d\n\n", n, fact);

	return 0;

}
