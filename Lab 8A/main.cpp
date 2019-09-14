// main.cpp
#include "Square.h"
#include <iostream>

using namespace std;



int main() {
	
	int s=0;
	
	
	Square s1	;			// default constructer called side == 1 
	Square  s2(134); 		// NOTE:  side == 134 for s2 
	s1.setSide(3); 			// set the variable side in s2 to 3 
	
	cout << "Calling member functions for square s1" << endl ;
	cout << "Side1 is........" << s1.getSide() << endl ;
	cout << "Area1 is........" << s1.area() << endl ;
	cout << "Perimeter1 is..." << s1.perimeter() << endl ;
	cout << "Diagonal1 is...." << s1.diagonal() << endl;
	
	cout << endl << endl ;
	cout << "Calling member functions for square s2" << endl ;
	cout << "Side2 is........" << s2.getSide() << endl ;
	cout << "Area2 is........" << s2.area() << endl ;
	cout << "Perimeter2 is..." << s2.perimeter() << endl ;
	cout << "Diagonal2 is..." << s2.diagonal() << endl ;
	
	cout << endl << endl ;
	cout << "Enter side..." << endl ;
	
	cin >> s;
	
	Square d(s);
	cout << "The side is ........" << d.getSide() << endl;
	cout << "The area is ........" << d.area() << endl;
	cout << "The perimeter is ..." << d.perimeter() << endl;
	cout << "The diagonal is....." << d.diagonal() << endl;
	
//	system("pause") ; 
	return 0;
}
