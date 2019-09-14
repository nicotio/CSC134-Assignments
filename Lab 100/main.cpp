#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <sstream>
#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 
#include "Circle.h"

using namespace std;

void displayCircleArray (Circle cax[], int nx);

void fillCircleArray (Circle cax[], int nx);

Circle maxCircumferance (Circle cax[], int nx);

Circle maxArea (Circle cax[], int nx);

Circle maxDiameter (Circle cax[], int nx);

bool equalCircles (Circle cax[], int nx);

double averageRadii (Circle cax[], int nx);

int Circle::nCircles = 0;

int main() 
{
	Circle c1;
	
	double s = 2.5;
	Circle c2 (s);
	Circle c3 (2.3);
	Circle c4 (2.3);
	
	cout << "Circle c1 is: " << c1.describe() << endl;
	cout << "Circle c2 is: " << c2.describe() << endl;
	cout << "Circle c3 is: " << c3.describe() << endl;
	cout << "Circle c4 is: " << c4.describe() << endl;	
	
	cout << endl << "nCircles (STATIC) ... " << c1.getCircles() << endl;
	
	if (c3 == c4)
	{
		cout << "Circles c3 and c4 are equal" ;
	}
	else
	{
		cout << "Cicles c3 and c4 are NOT equal";
	}
	cout << endl << endl << endl;
	
	int n = 25;
	Circle ca[n];
	
	cout << endl << "Filling the array with instances of Circle... " << endl;
	fillCircleArray (ca, n);

	cout << endl << "Display Circles in the array..." << endl;
	displayCircleArray (ca, n);
	
	cout << endl << "The Circle with the largest area is " << endl
	<< maxArea(ca, n).describe() << endl;
	
	cout << endl << "The Circle with the largest circumfercent is "
	<< endl << maxCircumferance(ca, n).describe() << endl;
	
	cout << endl << "The Circle with the largest diameter is "
	<< endl << maxDiameter(ca, n).describe() << endl;
	
	cout << endl << "There are equal circles."
	<< endl << boolalpha << equalCircles(ca, n) << endl;
	
	cout << endl << "The average of all the radius is "
	<< endl << averageRadii(ca, n) << endl;
	
	system("pause");	
	return 0;
}

void displayCircleArray(Circle cax[], int nx)
{
	for (int j = 0; j < nx ; j++)
	{
		cout << setw(3) << j << " " << cax[j].describe() << endl;
	}
}

void fillCircleArray (Circle cax[], int nx)
{
	srand(time(NULL));
	double random = rand () % 10 + 2;
	
	double radiusValue[25] = 
	{
		3.2, 4.5, 1.0, 3.2, 4.5,
 		2.2, 4.0, 5.1, 6.2, 4.5,
 		4.8, 3.2, 4.1, 5.2, 6.0,
 		3.4, 2.1, 4.7, 8.4, 5.6,
 		random, random, random,
 		random, random,
 	};	


 	for (int k = 0; k < nx; k++)
 	{
 		cax[k].setRadius(radiusValue[k]);
 	}
}

Circle maxCircumferance (Circle cax[], int nx)
{
	double max = 0;
	Circle maxC;
	for (int k = 0; k < nx; k++)
	{
		if (cax[k].circumfrence() > max)
		{
			max = cax[k].circumfrence();
			maxC = cax[k];
		}
	}
	return maxC;
}

Circle maxArea(Circle cax[], int nx)
{
	double max = 0;
	Circle maxA;
	for (int k = 0; k < nx; k++)
	{
		if (cax[k].area() > max)
		{
			max = cax[k].area();
			maxA = cax[k];
		}
	}
	return maxA;
}

Circle maxDiameter(Circle cax[], int nx)
{
	double max = 0;
	Circle maxD ;
	for (int k = 0; k < nx; k++)
	{
		if (cax[k].diameter() > max)
		{
			max = cax[k].diameter();
			maxD = cax[k];
		}
	}
	return maxD;
}

bool equalCircles(Circle cax[], int nx)
{
	bool b = false;
	
	for (int k = 0; k < nx; k++)
	{
		if (cax[k].getRadius() == cax[k+1].getRadius() )
		{
			b = true;
		}
	}
	return b;
}

double averageRadii (Circle cax[], int nx)
{	
	double sum = 0;
	
	for (int k = 0; k < nx; ++k)
	{
		sum = sum + cax[k].getRadius();
	}
	
	double average = sum / nx;
	return average;
}

