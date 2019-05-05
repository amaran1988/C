// Lorentz Butterfly program


#include <stdio.h>


int main(){


	double x0,y0,z0,x1,y1,z1,t;
	double sig = 10.0, rho = 28.0, beta=8/3;
	int nsteps = 10000; 
	double tmin, tmax, h;

	tmin = 0;
	tmax = 100;
	h = (tmax-tmin)/nsteps;
	
	x0 = 0;
	y0 = 1;
	z0 = 0;
	t = 0;	
	
	printf("%g\t%g\t%g\t%g\n",t,x0,y0,z0);

	//printf("%g\n",h);

	for(int i=0; i<nsteps; i++){
	
		x1 = x0+h*sig*(y0-x0);
		y1 = y0+h*x0*(rho-z0)-(y0*h);
		z1 = z0+h*((x0*y0)-(beta*z0));
		t += h;

		x0 = x1;
		y0 = y1;
		z0 = z1;
		
		printf("%g\t%g\t%g\t%g\n",t,x0,y0,z0);

}

	return 0;	


}
