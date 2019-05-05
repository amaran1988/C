// Program to show matrix calculations 


#include <stdio.h>

// pre-processor based constants aka macros

#define MAXROW 10
#define MAXCOL 10	

// eg. M_PI for pi



int main(){

//----------- Some predefined macros ------------

	printf("File :%s\n", __FILE__ );    
	printf("Date :%s\n", __DATE__ );    
	printf("Time :%s\n", __TIME__ );    
	printf("Line :%d\n", __LINE__ );    
	printf("STDC :%d\n", __STDC__ );  


//----------------- Define variables------------------

	int  i,j,k;

	int r1 = 2, r2 = 4, c1 = 4, c2 = 2;

//-------------- input matrices for A and B------------------

//double a[r1][r2] =  // will not work since they are variables
//double a[4][4] =  // will work since they are plain numbers

	double a[MAXROW][MAXCOL] = // will work as they are constants
		{
			{5, -3, -1,  6},
			{7, -2,  0,  1},
 	};


	// input matrix B
	// double b[r2][c2] = 

	double b[MAXROW][MAXCOL] = 

		{
			{ 5, 12},
			{ 7, 13},
			{14, -3},
			{-2, 2}
		};

//----------------------------------------------------
/*
// The following a and b is done to show another
   way of filling matrices

// METHOD - 2 --------------------------------------

	double a[4][2] = {5,12,7,13,14,-3,-2,2};

// METHOD - 3 ---------------------------------------

	double b[4][4] = 

	{
		{5,-3},
		{7,-2, 0, 1},
		{2},
		{4, 9, 11}
	};

 // Other options : Read from files (for big matrices),
 // b[0][0] = 5, b[0][1] = 12 ...(etc)
 // -------------------------------------------------

*/
	//------------- Further definitions----------------

 // Define an output matrix

 	double c[MAXROW][MAXCOL];

	// temporary sum value
	double s;

	//choice variable
	char choice;
	
	//--------------- The program starts ----------------

	printf("Proceed with default values? (y/n): ");
	scanf("%c", &choice);

	if(choice == 'n' || choice == 'N'){

		printf("Enter the number of rows in matrix A: ");
		scanf("%d", &r1);
		printf("Enter the number of cols in matrix A: ");
		scanf("%d", &c1);

		for(int i=0; i<r1; i++){
		
				for (int j=0; j<c1; j++){
				
						printf("Enter the value of a[%d][%d] =",i,j);
						scanf("%lf",&a[i][j]);
					}
			}

		printf("Enter the number of rows in matrix B: ");
		scanf("%d", &r2);
		printf("Enter the number of cols in matrix B: ");
		scanf("%d", &c2);

		for(int i=0; i<r2; i++){
		
				for (int j=0; j<c2; j++){
				
						printf("Enter the value of b[%d][%d] =",i,j);
						scanf("%lf",&b[i][j]);
							}
					}
			}
// ------------ Printing the Matrices A and B--------------

		printf("\nThe matrix A is: \n");

		for(int i=0; i<r1; i++){
				for(int j=0; j<c1; j++){

						if(j==c1-1){

							printf("%lf|\n",a[i][j]);

						} else if(j==0) {

							printf("|%lf\t",a[i][j]);

						} else {	

							printf("%lf\t",a[i][j]);		

						}
					}
			}

		
		printf("\nThe matrix B is: \n");

		for(int i=0; i<r2; i++){
				for(int j=0; j<c2; j++){

						if(j==c2-1){

							printf("%lf|\n",b[i][j]);

						} else if(j==0) {

							printf("|%lf\t",b[i][j]);

						} else {	

							printf("%lf\t",b[i][j]);		

						}
					}
			}



		printf("\n\n");

 //-------------- Matrix Multiplication algorithm --------------

	
	if(r1==c2){

		for(i=0;i<r1;i++){
		
				for(j=0; j<c2; j++){
					
					s = 0;	
					
						for(k=0; k<c1; k++){
					
							s += a[i][k] * b[k][j];	
					
								}	
					
					c[i][j] = s;
			
						}
				}

//----------------- Print the Matrix C---------------------

		printf("\nThe Product of A and B (or) matrix C is: \n\n");

		for(int i=0; i<r1; i++){
				for(int j=0; j<c2; j++){

						if(j==c2-1){

							printf("%lf|\n",c[i][j]);

						} else if(j==0) {

							printf("|%lf\t",c[i][j]);

						} else {	

							printf("%lf\t",c[i][j]);		

						}
					}
			}

		printf("\n\n");

	} else {
	
		printf("Matrix Multiplication is not possible!\n\n");

	}

//------------------- End of Program -----------------------

		return 0;


}
