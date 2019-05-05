// PROGRAM TO FIND ROOTS OF QUADRATIC EQUATION

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){

	float a,b,c;
	float img, dis;
	float r1,r2;
	printf("Enter the coefficients of the quadratic equation: \n");


	printf("a in x^2: ");
	scanf("%f",&a);
	printf("b in x^1: ");
	scanf("%f", &b);
	printf("c in x^0: ");
	scanf("%f", &c);
	
	dis = b*b-(4.0*a*c);

	printf("\nThe roots of the equation are: \n");

	if(dis>0){
		
			r1 = (-b+sqrt(dis))/(2.0*a);
			r2 = (-b-sqrt(dis))/(2.0*a);

	} else if(dis==0){

			r1 = -b/(2.0*a);
			r2 = -b/(2.0*a);

	}	else {


			r1 = -b/(2.0*a);
			r2 = -b/(2.0*a);
			img = sqrt(-dis)/(2.0*a);	
			
	}
				
			printf("Root1: %g + i%g\n", r1, img);
			printf("Root2: %g + i%g\n\n", r2, img);

	return 0;

}
