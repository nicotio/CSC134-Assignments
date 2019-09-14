#include "Circle.h"
#include <cmath>
#include <string>
#include <iostream>
#include <sstream>

double pie = 3.1416;

 Circle::Circle()
 {
 	r = 1;
 	nCircles++;
 }
 
 Circle::Circle(double x)
 {
 	if (x > 0)
 	{
 		r = x;
 		nCircles++;
 	}
 }
 
 double Circle::getRadius()
 {
 	return r;
 }
 
 void Circle::setRadius(double x)
 {
 	if (x>0)
 	{
 		r = x;
 	}
 }
 
 double Circle::area()
 {
 	double area = pie*pow(r, 2);
 	return area;
 }
 
 double Circle::circumfrence()
 {
 	double circ = pie*diameter();
 	return circ;
 }
 
 double Circle::diameter()
 {
 	double d = r*2;
 	return d;
 }

bool Circle::operator==(const Circle other)
{
	bool b = false;
	if (r == other.r)
	{
		b = true;
	}
	return b;
}

string Circle::describe()
{
	stringstream ss;
	string s;
	ss << "[ Radius = " << getRadius() << " Area = " << area() 
	<< " Circumference = " << circumfrence() << " Diameter = " << diameter() << "]";
	
	s = ss.str();
	return s;
}
