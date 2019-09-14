// Lab1A.cpp
#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{ 
	double mpg;
	double averagemlg;
	double fuel;
	string city;
	double miles;
	double cost;

	
	cout<< "Sample Output: Nico Tio" <<endl ;
	cout<< "Enter Name of Destination." <<endl <<endl;
	cin>> city;
	cout<< "Your destination is " << city <<endl;
	cout<< "Enter Miles per gallon of vehicle." <<endl <<endl;
	cin>> mpg;
	cout<<"The mpg is " <<mpg <<endl <<endl;
	cout<< "Enter Number of Miles to Destination" <<endl <<endl;
	cin>> miles;
	cout<< "The Average Miles Per Gallon of Vehicle is " << miles <<endl <<endl;
	cout<< "Enter Average Cost of Fuel Per Gallon" <<endl <<endl ;
	cin>> fuel;
	cout<< "The Average Cost of Fuel Per Gallon is " <<fuel <<endl << endl;
	cost= (miles/mpg)*fuel;
	cout<< "Amount spent on Fuel to "<<city <<cost;
	
	
	
	return 0;
}
