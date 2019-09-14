#include "Triangle.h"
#include <cmath>
#include <algorithm>
using std::sort;

Triangle::Triangle()
{
	s1 = 1;
	s2 = 1;
	s3 = 1;
}

Triangle::Triangle( int x )
{
	s1 = x;
	s2 = x;
	s3 = x;
}

Triangle::Triangle( int x, int y, int z)
{
	s1 = x;
	s2 = y;
	s3 = z;
}

//==============================================================//

//Triangle Area Works...
double Triangle::area() 
{
	double a = 0.0;
	double theArea = 0;
	a = ((s1 + s2 + s3 )/ 2);
	theArea = ( a * ( a - s1 ) * ( a - s2 ) * ( a - s3 ) );
	theArea = sqrt(theArea);
	return theArea;
}

//Triangle Perimeter Works...
int Triangle::perimeter()
{
	int p = s1 + s2 + s3;
	return p;
}

//Tirangle Getters Works...
// S1
int Triangle::getSide1()
{
	return s1;
}

//S2
int Triangle::getSide2()
{
	return s2;
}

//S3
int Triangle::getSide3()
{
	return s3;
}

//============================================================

// Get Side Works...

void Triangle::setSide1(int x) { s1 = x; }
void Triangle::setSide2(int x) { s2 = x; }
void Triangle::setSide3(int x) { s3 = x; }

//=============================================================

int Triangle::maximus(int a, int b)
{
	if ( a > b)
	{return a;
	}
	else if ( b > a)
	{return b;
	}
	
	else
	{ return a;
	}
	

}

//
int Triangle::leastimus(int a, int b)
{
	if (a < b)
	{return a;
	}
	else if (b < a)
	{return b;
	}
	
	else
	{ return a;
	}
}


// Triangle Largest Side

int Triangle::largestSide()
{
	int m = maximus(s1, s2);
	int a = maximus(m , s3);
	
	if (s1 == a)
	{ return s1;
	}
	else if( s2 == a)
	{return s2;
	}
	else 
	{return s3;
	}
	
	
}


int Triangle::smallestSide()
{

	int m = leastimus(s1 , s2);
	int a = leastimus(m ,s3);
	
	if (s1 == a)
	{return s1;
	}
	else if (s2 == a)
	{return s2;
	}
	else
	{return s3;
	}
}

bool Triangle::isRight()
{
	bool b = false;
	s1 = Triangle::getSide1();
	s2 = Triangle::getSide2();
	s3 = Triangle::getSide3();
	int largo = Triangle::largestSide();
	
	if ( s1== largo)
	{
	
		if (pow (s1, 2) == pow (s2 , 2) + pow(s3 , 2))      
		{
			b = true;
		}
	}
	
	else if (s2 == largo)
	{
	
		if (pow (s2, 2) == pow (s1 , 2) + pow(s3 , 2))      
		{
			b = true;
		}
	}
	
	else 
	{
	
		if (pow (s3, 2) == pow (s1 , 2) + pow(s2 , 2))      
		{
			b = true;
		}
	}
	
	return b;

	
}

string Triangle::typeTriangle ()
{
	string s = "It is not a triangle";
	bool d = false;
	d = Triangle::isTriangle();
	if ( true == d)
	{

	
		if ( s1 == s2)
		
		{
			if (s1 == s3)
			{
				s = "The triangle is a equilateral";
				return s;
			}
			
			else if (s1 == s2)
			{
				s = "The triangle is a isosceles";
				return s;
			}
			
		}
	
		else if ( s1 == s3)
		{
			if ( s1 == s3)
			{
				s = "The triangle is a isosceles";
				return s;
			}
			
		}
		
		else if ( s2 == s3)
		{
			if (s2 == s3)
			{ 
				s = "The triangle is a isoceles";
				return s;
			}
			
		}
		
		else 
	{
		s = "The triangle is a scalene";
		return s;
		
	}
	
	
}

	else
		{
			return s;
		}
}

bool Triangle::isTriangle()
{
	bool b = false; 
	int largo = Triangle::largestSide();
	int s4 = 0;
	
	if (s1 == largo)
	{
		s4 = s2 + s3;
		if ( s1 < s4)
		{ 
			b = true;
		}
	}
	
	else if (s2 == largo)
	{
		s4 = s1 + s3;
		if ( s2 < s4)
		{ 
			b = true;
		}
	}
	
	else if (s3 == largo)
	{
		s4 = s2 + s1;
		if ( s3 < s4)
		{ 
			b = true;
		}
	}	
	
	
	
	return b;
	
}

bool Triangle::operator==( const Triangle other) // is Triangle a == Triangle b ?? 
	{   
	bool d = false;

	int maxs = Triangle::largestSide();
	int smax = Triangle::smallestSide();
	int ppp = Triangle::perimeter();
	
	int a= other.s1;
	int b= other.s2;
	int c= other.s3;
	int peris= a + b +c;
	
	
	int m = maximus(a, b);
	int maxim = maximus(m , c);
	
	int n = leastimus(a , b);
	int minim = leastimus(n , c);
	
	if (maxs == maxim)
	{
		if (smax == minim)
			{
				if (ppp == peris)
				{	d = true;
					return d;
				}
			}
	} 
	
       

    return d ; 
	} 
    


   string Triangle::describe() 
    { 
      	stringstream ss;
		string s ; 
        ss << " [" << s1 << " " << s2  << " " << s3 << " ] " << " with type.." << typeTriangle()  ;
        s = ss.str();
         return s; 
   }  
  











