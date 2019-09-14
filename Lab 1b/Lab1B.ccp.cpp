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

	
	// T-Shirts	
	string s1;    
    double scost;
	// Jeans
	string j1;
	double jcost;
	// Jacket	
	string ja1;
	double jacost;
	//Sweatshirt
	string sw1;
	double swcost;
	//Hoodie
	string h1;
	double hcost;
	//socks
	string so1;
	double socost;
	//Discount 
	string d1;
	double dcost;
	//SalesTax
	string st1;
	double stcost;
	//Sum
	double sum =0;
	double dtotal; //discount amount
	double save;
	double taxtotal; 
	double tot;
	

	
	inFile.open("clothing.dat");                    
    outFile.open("TioNico.txt");             

    outFile << fixed << showpoint;  
    outFile << setprecision(2);
    
    cout << "List of Items: " << endl;
 
 	inFile >> s1 ; // T-Shirt
	inFile >> scost;
	cout << ""<< s1;
	cout << " $"<< scost <<endl;

	inFile >> j1 ; // Jeans
	inFile >> jcost;
	cout << "" << j1;
	cout << " $" << jcost << endl;

	
	inFile >> ja1 ; // Jacket
	inFile >> jacost; 
	cout << "" << ja1;
	cout << " $" << jacost << endl;

	inFile >> sw1 ; // Sweatshirt
	inFile >> swcost; 
	cout << "" << sw1;
	cout << " $" << swcost << endl;

	
	inFile >> h1 ; // Hoodie
	inFile >> hcost; 
	cout << "" << h1;
	cout << " $" << hcost << endl;

	
	inFile >> so1 ; // Jacket
	inFile >> socost ; 
	cout << "" << so1 ;
	cout << " $" << socost << endl;
	
	inFile >> d1 ; // discount
	inFile >> dcost ;
	cout << "" << d1 ;
	cout << " " << dcost<<"%" <<endl;
	
	inFile >> st1 ; //Salestax
	inFile >> stcost;
	cout << "" << st1 ; 
	cout << " " << stcost<<"%" <<endl; 
	
	// Calculation
	sum = sum + scost;
	sum = sum + jcost;
	sum = sum + jacost;
	sum = sum + swcost;
	sum = sum + hcost;
	sum = sum + socost;
	dtotal = sum*dcost/100 ;// amount of discount
	save = sum - dtotal; //price after discount
	taxtotal= save*stcost/100 ;//tax amount
 	tot = save+taxtotal ; // TOTS
	
	cout << "Total cost of all items: $"<< sum << endl;
	cout << "Amount saved with discount: $" << dtotal << endl;
	cout << "Price after discount : $" <<save <<endl;
	cout << "Taxes: $"<< taxtotal << endl ;
	cout << "Total cost of order: $"<< tot << endl;

	// OutFile
	
	outFile << "Total cost of all items: $" <<sum <<endl <<endl;
	outFile << "List of items:" << endl;
	outFile << "" << s1;
	outFile << " $" <<scost <<endl;
	outFile << "" <<j1;
	outFile << " $" <<jcost<< endl;
	outFile << "" <<ja1;
	outFile << " $" << jcost <<endl;
	outFile << "" <<sw1;
	outFile << " $" <<swcost << endl;
	outFile << ""<<h1;
	outFile << " $"<<hcost << endl;
	outFile << ""<<so1;
	outFile << " $"<<socost << endl;
	outFile << ""<< d1;
	outFile << " "<< dcost<<"%"<< endl;
	outFile << ""<< st1 ;
	outFile << " "<<stcost<<"%" << endl <<endl <<endl;
	outFile << "Amount saved with discount: $" <<dtotal<<endl;
	outFile << "Price after discount: $" <<save <<endl;
	outFile << "Taxes: $" <<taxtotal << endl;
	outFile << "Total cost of order: $"<< tot <<endl;
	
	inFile.close();
	inFile.close();
	
	
//	outFile << " "<< s1;
//	outFile << " $"<< scost;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
