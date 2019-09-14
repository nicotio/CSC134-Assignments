#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>
using namespace std;

// Counting Digits

int nDigits(int n)
{
	int cnt = 0;
	int d = 0;
	while (n !=0)
		{
			cnt = cnt+1;
			n = n/10;
		}
	return cnt;
}

// Reversing digits

int res(int n)
{
	int rev = 0;
	while (n >0)
		{
			rev = rev *10 + n % 10;
			n = n /10;
		}
	return rev;
}

// Palindromee
bool pd(int n)
{
	string k;
	bool l = false;
	if (n == res(n))
		{
			
			l = true;
		
		}
		return l;
}



// Void Digit Count

void dcount(int n, int& eCount, int& oCount)
{
	eCount = 0;
	oCount = 0;
	int x(0), z(0);
	while (n >0)
		{
			x = n % 10;
		
				if (x == 0)
					{  eCount++; }
				
				else if (x % 2 == 1)
					{   oCount++;   }	
				
				else 
				{   eCount++;  }
			
			n /= 10;
		}
}

// Biggest digit
	

int bigg(int n)
{
	int max = 0;
	int mx;
	while (n != 0)
	{
		mx = n % 10;
		if(mx>max)
		{
			max = mx;
		}
		n = n /10;
	}
	return max;
	}
	
	
// Smallest digit

int small(int n)
{
	int min = 10;
	int zz;
	while (n != 0){
		zz = n %10;
		if(zz<min){
			min = zz;
		}
		n = n/10;
	}
	return min;


}


// Average of digits
double avg(int n)
{
	int s = 0;
	int t = 0;
	double sum = 0;
	double sv = 0;
	int d = nDigits(n);
	double x=nDigits(n);
	
		while (d > 0)
		{
			t = n/pow (10, d-1);
				if (s < t)
					{	s = t;	}
			sum = sum + t;
			n = n - t*pow(10, d-1);
			d = d -1;
		}
	sv = sum/x;
	return sv;
}

