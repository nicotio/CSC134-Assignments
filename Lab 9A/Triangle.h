
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Triangle
{
	
	public:
	
	//Constructor
	Triangle ( );
	Triangle ( int x );
	Triangle ( int x, int y, int z );
	
	// Getters
	int getSide1(); 
	int getSide2();
	int getSide3();
	
	// Setters
	void setSide1(int x);
	void setSide2(int x);
	void setSide3(int x);
	
	//Describe & Type
	string describe();
	string typeTriangle ();
	
	//Area
	double area();
	
	//Perimeter & Sides
	int perimeter();
	int largestSide();
	int smallestSide();
	int maximus(int a,int b);
	int leastimus(int a, int b);
	
	// Right or Regular Triangle
	
	bool isRight();
	bool isTriangle();
	bool operator == ( const Triangle other);
	
	
	
	private:
		
	int s1, s2, s3;
	
	
	
	
};
	
	

