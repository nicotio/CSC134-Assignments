// NICO TIO
// CSC 134

#include <iostream>
#include <string>
using namespace std;


int main()
{

	//
	char ch= ' ';
	char tr= ' ';
	string mt, ht;

	//	MAIN MENU
	string s1 = "Cheeseburger"; 
	string s2 = "Hotdog" ;
	string s3 = "Chicken";
	string s4 = "Chili";
	string s5 = "Salad";

	// EXTRAS
	string s6 = "No extras" ;
	string s7 = "Drink" ;
	string s8 = "Drink + Side" ;
	
	// GREATING
	cout << "Welcome to Mel's Diner!" << endl << endl << endl;

	// Main Menu Option
	cout << "1: " << s1 << endl;
	cout << "2: " << s2 << endl;
	cout << "3: " << s3 << endl;
	cout << "4: " << s4 << endl;
	cout << "5: " << s5 << endl;
	
	//Offer
	cout << "Select your main dish from the option above: ";
	cin >> ch;
	
	switch (ch)
	{
			case '1' :	mt = s1;
				break;
			case '2' :	mt = s2;
				break;
			case '3' :	mt= s3;
				break;
			case '4' :	mt= s4;
				break;
			case '5' :	mt= s5;
				break;	
			default: cout <<"Invalid Option Selected";
			return 0;
	}
	
	cout << endl << "You have selected " << mt << endl << endl ;
	
	// Sides
	cout << "1: " << s6 << endl;
	cout << "2: " << s7 << endl;	
	cout << "3: " << s8 << endl;
	cout << "Select your main dish from the options above: " << endl; 
	cin >> tr;
	
	switch (tr)
		{
		
			case '1': ht = s6;
				break;
			case '2': ht = s7;
				break;
			case '3': ht = s8;
				break;
			default: cout << "Invalid option selected" ;
			return 0;
			
}

	cout << " You have selected " << mt << " and " << ht << "." << endl;
	cout << endl <<"Thanks for dining with us!";
	

	
		
	
	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	 
    return 0 ;
}
