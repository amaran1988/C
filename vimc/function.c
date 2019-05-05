// Program to explain functions


#include <stdio.h>
#include <math.h>

double area_tri(){

		double a,b,c,s;
		double area;

		printf("\nEnter the sides of the Triangle: \n");

		printf("a: ");

		scanf("%lg",&a);

		printf("b: ");

		scanf("%lg",&b);
	
		printf("c: ");

		scanf("%lg",&c);

		s = (a+b+c)*0.5;

		area = sqrt(s*(s-a)*(s-b)*(s-c));

		return area;
};


double area_sq(){

		double a;

		printf("\nEnter the side of the Square: ");

		scanf("%lg",&a);

		return a*a;

};



int main(){
	
	char choice;
	double area;

	printf("Calculate the area of Square or Triangle? (S or T) ?");
	scanf("%c",&choice);
	
	if(choice =='T'|| choice == 't'){

		area = area_tri();

		printf("\nThe area of the triangle is: %g\n\n", area);

     }	else if(choice == 'S' || choice == 's'){

			area = area_sq();
	  
		  printf("\nThe area of the square is: %g\n\n", area);

         } else {

					printf("\nInvalid input. Exiting...\n\n");

				 }

	return 0;

}
