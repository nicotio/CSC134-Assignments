#include <iostream>
#include "myArray.h"
#include <stdlib.h>
#include <algorithm>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void print(int, int);

int main() {
	
	using namespace std;
	

	int n = 50, m = 0, wow=0;
	int a[n] ;
	int even = 0;
	int odd = 0;
	int j, lol;
	int ax;
	int eCount = 0, oCount = 0;
	
	
	do
	{
	cout << "Enter 1 to fill the array with random integers in the range 25 -100" << endl ;
	cout << "Enter 2 to display the sum of the n = 50 integers" << endl ;
	cout << "Enter 3 to display the largest integer in the array" << endl ;
 	cout << "Enter 4 to display the average of the n = 50 integers in the array. " << endl ;
	cout << "Enter 5 to display the smallest integer in the array" << endl ;
	cout << "Enter 6 to print all the data in the following format: 10 integers per line for a total of 5 lines" << endl ;
	cout << "Enter 7 to display the number of even and odd integers" << endl ;
	cout << "Enter 9 to exit the program." << endl ; 
	
	cin >> j;
	
	switch(j)
	{
			case 1: fillArray(a, n);
					while (m != n)
					{ 
						cout <<	a[wow] << " ";
						m++;
						wow++;
					} 
					cout << endl << endl;
			break;
			case 2: cout << "The sum is " << sum (a, n) <<endl << endl;
			break;
			case 3: cout << "The largest integer is " << max(a, n) << endl << endl;
			break;
			case 4: cout << "The average is " << avg(a, n) << endl << endl;
			break;
			case 5: cout << "The smallest integer is " << notmax(a, n) << endl << endl;
			break;
			case 6:	for (int i = 0; i < n; i++)
			 {
 						cout << a[i] << " ";
 					
					 if ((i + 1) % 10 == 0) {
   						cout << endl; }
			}
						cout << endl << endl;
			break;
			case 7: evenodd (a, n, eCount, oCount);
			cout << "There are " << eCount << " even integers and " << oCount << " odd integers.";
			break;
	}
	
	}
	while(j !=9);
	

	
	
	
	
	return 0;
}



