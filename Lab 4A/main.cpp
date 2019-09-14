#include <iostream>
#include "tio.h"
#include <fstream>
#include <istream>
#include <vector>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv) {
	
	int cnt = 0, n = 0, eCount = 0, oCount = 0;
	int a, b, c, d, e, f, g, h;
	
	//Input
	ifstream input("integers.txt");
	input >> a >> b >> c >> d >> e >> f >> g >> h;  
	
	// Palindrome
	
	pd(c);
	bool k = pd(c);
	string ko;
	if (k == true)
	{
		ko = "a Palindrome";
	}
	else if (k == false)
	{
		ko = "not a Palindrome";
	}

	//integers
	dcount(e,eCount, oCount);
	
	//output
	cout << "The number of digits in "<< a <<" is "<< nDigits(a) << endl;
	cout << "The reverse of "<< b << " is "<< res(b) << endl;
	cout << c << " is "<<  ko << endl;
	cout << "there are "  << oCount << " odd integers and "<< eCount<< " even integers in the integer "<< e << endl;
	cout << "The largest digit in "<< f << " is "<<  bigg (f) << endl;
	cout << "The smallest digit in "<< g << " is "<< small(g) << endl;
	cout << "The average of the digits in "<< h << " is "<< avg(h) << endl;
	
	
	input.close();
	
	

	return 0;
}
