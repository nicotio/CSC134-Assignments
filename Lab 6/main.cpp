#include <iostream>
#include <string>
#include <fstream>
#include "strings.h"

using namespace std;


int main() 
{

	const char* file = "sentences.txt" ;
	int j = 1; // line counter
	string sentence ; 
	string hpop = "bob";
	

	ifstream input;
 	input.open(file,ios::in) ; // now open the file
 

	
 	while(!input.eof())
 	{
 		getline (input , sentence);
 		if (!input.eof() )
 		{
 		switch (j)
			{
				case 1: cout << "call nChars on   " << sentence << "..... " << nChars(sentence) << endl;
				break;
				
				case 2: cout << "call reverse on  " << sentence << ".... " << reverse(sentence) << endl;
				break;
				
				case 3: 
				cout << "call is Palidrome on  " << sentence << ".....  " << boolalpha <<  isPalindrome(sentence) << endl;
				break;
				
				case 4: cout << "call nIntegers on " << sentence << ".... " << nintegers(sentence) << endl;
				break;
				
				case 5: cout << "call repeatChar on " << sentence << ".... " << boolalpha << repeatsChar(sentence) << endl;
				break;
				
				case 6: cout << "call uppercase on " << sentence << ".... " ; upercase(sentence); 
						cout << sentence << endl;
				break;
				
				case 7: cout << "call noVowels on " << sentence << " " ; removeVowels(sentence);
						cout<< sentence << endl;
				break;
				
				case 8: cout << "call nAlpha on " << sentence << " " << nAlpha(sentence) << endl;
				break;
				
			

			
				
				
				
			}	
		j++;
 		}
 		
 		
 		
 	}









return 0;
}
