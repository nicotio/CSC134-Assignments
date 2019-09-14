#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <math.h>
#include <iomanip>
#include <iostream>

// FILL ARRAY

void fillArray (int ax[], int nx)
{
	int random;

	for (int i = 0; i < nx ; i++)
    { 
    	ax[i] = rand()% 75 + 25;
    	
	}
	
}

// SUM of Array



int sum(int ax[], int nx )
{
	int lol = 0;
	
	for (int i = 0; i < nx ; i++)
	{
		lol +=ax[i];
		
	}
	
	return lol;
		
}

//void evenodd (int ax[], int nx, int& ox, int even& ex)
	
	
	
// MAX
int max (int ax[], int nx)
{
	int mx=0;
	for (int i = 0; i < nx ; i++ )
	{

		if (ax[i] > mx)
		{
			mx = ax[i];
		}
	
	}
	return mx;
}

// MIN INTEGER

int notmax (int ax[], int nx)
{
	int mx=101;
	int dob=0;
	for (int i = 0; i < nx ; i++ )
	{

		if (ax[i] < mx)
		{
			mx = ax[i];
		}
	
	}
	return mx;
}

//Print



//double avg(int n)


double avg(int ax[], int nx)


{

		double lol;
		static_cast<double>(nx);
		double aver;
	for (int i = 0; i < nx ; i++)
	{
		lol +=ax[i];
		
	}
	

	

	
	aver = lol / nx;
	return aver;
	

}



//Even and odd


void evenodd(int ax[], int nx, int& eCount, int& oCount)
{
	
	eCount = 0;
	oCount = 0;
	int x(0), z(0);
	for (int i = 0; i < nx; i++)
		{
	

		x = ax[i] % 10;
		
		if (x == 0)
		{  eCount++; }
				
		else if (x % 2 == 1)
		{   oCount++;   }	
				
		else 
		{   eCount++;  }
			
		
		}
}








