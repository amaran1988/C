// Program to find the length of the coordinate and 
// find the angle between the coordinate and origin.
// Also need to find the position in the quadrant. 

#include <stdio.h>
#include <math.h>

int main(){

	float x,y,l,a;

	printf("Enter the coordinates (x,y): \n");
	scanf("%g,%g",&x,&y);

	l = sqrt(pow(x,2)+pow(y,2));

	printf("\nThe length of the coordinate from the origin is: %g\n\n",l);	
	
	if(x == 0 && y!= 0){

		a = 90.0;

		} else if(x == 0 && y == 0) {


			a = 0.0;

			} else {

			a = atan(y/x) * 180.0/M_PI; // M_PI = pi in math.h

			}
		printf("The angle made by the coordinates (%g,%g) is %g degrees\n\n",x,y,a);

		
		if(x>0 && y>0){

			printf("The coordinate is in the first quadrant\n");

			} else if(x<0 && y>0){

				printf("The coordinate is in the second quadrant\n");

			} else if(x<0 && y<0){

				printf("The coordinate is in the third quadrant\n");

			} else if(x>0 && y<0){

				printf("The coordinate is in the fourth quadrant\n");

			} else if(x == 0 && y>0){

				printf("The coordinate is on the positive y axis\n");

			} else if(x == 0 && y<0){

				printf("The coordinate is on the negative y axis\n");

			}	else if(x>0 && y==0){

				printf("The coordinate is on the positive x axis\n");

			} else if(x<0 && y==0){

				printf("The coordinate is on the negative x axis\n");

			}

				printf("\n");

	return 0;
	
}
