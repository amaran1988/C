/*


Data type prefixes

long, signed, unsigned, short, long, long long

int: signed/unsigned, short, short int, int, long, long int, long long, long long int

short <= short int <= int <= long <= long int <= long long <= long long int

char: signed/unsigned

short char <= char <= long char

n = the number of bytes of int/char
 unsigned: 0 to 2^(8*n)-1
 signed : -2^(8*(n-1))-1 to 2^(8*(n-1))-1

float
double
long double

*/

#include <stdio.h>
#include <stdint.h>

int main(){

	unsigned int i0;
	int i1 = 125;
	unsigned int i2 = 123;
	long int i3 = 34553;
	long unsigned int i4 = 78532;
	short i5 = 78;
	float f1 = -95.58;

	printf("The size of the integer data is %d\n\n", sizeof(i1));

	printf("%i\n",i1); // default specifier for int
	printf("%5i\n",i1); // places nr. of  char to display
	printf("%05i\n",i1); // places nr. of char to display with 0
	printf("%u\n",i2); // unsigned int
	printf("%ld\n",i3); // long int 
	printf("%lu\n",i4); // long unsigned int 
	printf("%hd\n",i5); // short int 
	printf("%o\n",i2); // octal representation of int 
	printf("%x\n",i2); // hexa decimal representation 
	printf("%X\n",i2); // another type of hexa decimal repre..

	printf("%f\n",f1); // will have precision issues
	printf("%g\n",f1); // prints as it is
	printf("%e\n",f1); // Exponential format 
	printf("%E\n",f1);
	printf("%4.3f\n",f1); // format specifier for %f
	printf("%5.5f\n",f1);
	return 0;

}
