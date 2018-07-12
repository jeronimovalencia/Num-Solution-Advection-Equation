#include <iostream>
#include <math.h>

//Discretización de las variables
const int nx=80;
double x[nx];

int nt = 100;

double c=1.;
double x_min = 0;
double x_max = 2;
double delta_x = (x_max-x_min)/nx;
double delta_t = (x_max-x_min)/(6*nx*c);
double t_final = nt*delta_t;

int main()
{
	double u_futuro[nx];
	double u_presente[nx];
	
	//Condicion inicial
	double u_inicial[nx];

	for(int i=0; i<nx;i++)
	{
		if(i<= 50 && i >= 30)
		{
			u_inicial[i] = 2;
		}	
		else
		{
			u_inicial[i] = 1;	
		}
	}


	//Condicion de frontera
	u_futuro[0]=1.0;

	for(int m=0;m<nx;m++)
	{
		u_presente[m] = u_inicial[m];
	}

	for(int j=0;j<nt;j++)
	{
		for(int k=1;k<nx;k++)
		{
			u_futuro[k] = -c*(delta_t/delta_x)*(u_presente[k]-u_presente[k-1]) + u_presente[k];
		}

		for(int l=0;l<nx;l++)
		{
			u_presente[l] = u_futuro[l];
		}
		
	}

	std::cout << "Tiempo=" << " " << t_final << " " << "0"<< std::endl;

	for(int l=0;l<nx;l++)
	{
		std::cout << l*delta_x << " " << u_presente[l] << " " << u_inicial[l]<< std::endl;
	}
	
	
	return 0;
}


















