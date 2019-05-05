#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
   
   float a, b, c; // sides of the triangle
   
   float s, area; // semi-perimeter and area of the triangle
   
   printf("Enter the sides of the triangle:\n");
   
   
   printf("a: ");
   scanf("%f",&a);
   printf("b: ");
   scanf("%f",&b);
   printf("c: ");
   scanf("%f",&c);
   
   s = (a+b+c)/2.0;
   
   area = sqrt(s*(s-a)*(s-b)*(s-c));
   
   printf("The area of the triangle for sides %f, %f, %f is: %f\n",a,b,c,area);
   
   
}
