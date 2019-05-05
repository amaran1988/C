#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

		/* This is a multi line comment */
		
		// integer - 4 bytes of memory
		int i1, i2, i3;
		
		// float - 4 bytes of memory
		float f1, f2, f3;// 8 digits of precision
		
		// double - 8 bytes of memory - more precise than float but slower
		double d1, d2, d3;// 15 digits of precision
		
		// Character - 1 byte of memory
		// numbers -128 to 127 and/or a single character
		char c1, c2, c3, c4, c5;
		
		// Boolean true or false
		// need library stdbool.h
		bool b1, b2, b3;
		
		i1 = 5;
		i2 = 23;
		i3 = i1 + i2;

		
		// Here the format specifier for int is %i but olden days %d were used
		printf("The sum of %i and %i is %i\n", i1, i2, i3);
		printf("The quotient of %i and %i is %i\n", i1, i2, i2/i1);
		printf("The reminder of %i and %i is %i\n", i1, i2, i2%i1);
		
		f1 = 5.2;
		f2 = 20.46;
		f3 = f2/f1;
		
		//Here the format specifier for float is %f but %g and %e are also used - same for double
		printf("The division of %f and %f is %f\n", f1, f2, f3);
		
		d1 = 5.2;
		d2 = 20.46;
		d3 = d2/d1;
		
		printf("The division of %f and %f is %f\n", d1, d2, d3);
		
		c1 = 50;
		
		c2 = 10;
		c3 = c1-c2;
		c4 = 'j';
		c5 = ')';
	  // Here the format specifier for character, %d has been used for numbers in character
		// and %c has been used for letters in characters. Also to be noted that '' is used 
		// rather than "" since there is a huge difference between them
		printf("The subtraction of %d and %d is %d\n", c1, c2, c3);
		printf("The characters 1 and 2 are %c and %c\n", c4, c5);
		
		b1 = true;
		b2 = false;
		
		printf("The value of true and false are %d and %d\n", b1, b2);
		
		
}
