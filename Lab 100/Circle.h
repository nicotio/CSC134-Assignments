#include <string>
#include <iostream>
#include <sstream>
using namespace std ;

class Circle
{
	private:
		double r;
		static int nCircles;
		
	public:
		Circle();
		Circle(double x);
		
		static int getCircles()
		{
			return nCircles;
		};
		
		double getRadius();
		
		void setRadius(double x);
		
		double area();
		double circumfrence();
		double diameter();
		
		string describe();
		
		bool operator==(const Circle other);
};
