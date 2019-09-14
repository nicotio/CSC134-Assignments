#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
        //Declare variables; 
    ifstream inFile; //input file stream variable
    ofstream outFile; //output file stream variable

	double tcost;
   // double sum = 0;
   // double n = 5.0 ;           // number of test scores 
	string s1;   
    //string lastName;    

    inFile.open("clothing.dat");                    
    outFile.open("TioNico.txt");             

    outFile << fixed << showpoint;  
    outFile << setprecision(2);   

    cout << "Processing data" << endl;
	inFile >> s1 ; // T-Shirt
	
	cout << " s1 = " << s1 << endl ;
	inFile >> tcost ; // cost of T-Shirt
	
	cout << " tscost... " << tcost << endl << endl ; 
	outFile << tcost ;
	
	
	
	
	
	
	
	
	
	
	return 0;
}
