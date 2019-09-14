#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>


using namespace std;

int main ()
 {
	
   int j=0, Even=0, Odd=0, EvenSum=0, OddSum=0, TotalSum=0, big=0, small=0;
   int cnt = 0;
   string file;
   double avg = 0;
   ifstream input; 
   
   cout << "Welcome to Wake's Integer processing Agency." << endl ;
   cout << "What is the name of the input file? " ;
  
   getline (cin, file);
   input.open(file.c_str()) ;  	        
    
	while(!input.eof()) 
     {    
       input >> j ;
	   if (!input.eof() ) 
		{ 
	    	cnt++; 	
			if (j % 2 == 0)
		 	{
		 			Even++ ;
		 			EvenSum += j;
		 			
		 	}
		 	else 
		 	{
		 		Odd++ ;
		 		OddSum +=j;
		 	}
		 	TotalSum = OddSum + EvenSum;
		 	
		 	if (cnt == 1)
		 	 {	big = j;
		 		small = j;
		 	 }
		
			else 
			{ 
				if (big < j)
				{big = j;
				}
				if (small > j ) 
				{small = j;
				}
			}
		}
		 avg = (big + small) / 2.0;
		 
	}
		 
		 
		 
		 
		
	    
     
     cout << endl ;
	 cout << "The number of intergers in the file is " <<cnt << endl;
	 cout << "There are " << Odd << " odd intergers and "<< Even << " even intergers" << endl ;
	 cout << "The sum of of the odd intergers is " << OddSum << endl;
	 cout << "The sum of the even interger is " << EvenSum << endl;
	 cout << "The sum of all the intergers is " << TotalSum << endl;
	 cout << "The largest integers is " << big << endl;
	 cout << "The smallest integer is " << small << endl;
	 cout << "The average of " << big << " and " << small << " is " << avg ; 
	 
	 
	 
	 
	 input.close();                 // close file 
	  
	return 0;
}	// end of main
	
	
	

