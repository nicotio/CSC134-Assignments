#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <assert.h>

using namespace std;


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Programmer: Nico Tio																												//
// 																																		//
//	Lab 2A                                                                                                                              //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
	int csalary;
	int nm = 100050;
	int md = 96020;
	int al = 89740;
	int nc = 84910;
	int ma = 80840;
	int ol;
	int op;
	int opz;
	string oaz;
	string cc;
	string ccb;
	


	cout<< "Please Enter your current Salary: " ;
	cin>> csalary; 
	
	cout<< endl;
	cout<< "Option 1: Santa Fe, New Mexico" <<endl;
	cout<< "Option 2: Bethesda, Maryland" <<endl;
	cout<< "Option 3: Anniston, Alabama" <<endl;
	cout<< "Option 4: Durham, North Carolina" <<endl;
	cout<< "Option 5: Lawrence and Salem, Massachusetts" <<endl <<endl;
	
	cout<< "Please Select a City from the Above list (Option 1 - 5): ";
	cin>> op;
	

	//cout<< endl << "You have entered a salary of "<< csalary << " and selected option " << op << " for the city." <<endl;
	//cout<< endl;
	
		
	
	
	// MEDIAN SALARY IF

	if (op == 1)
	{op=nm ;
	ol = 1;
	ccb= "Santa Fe";
	}
	
	else if ( op == 2 )
	{op=md ;
	ol = 2;
	ccb= "Bethesda";
	}
	
	else if ( op ==3 )
	{op=al;
	ol = 3;
	ccb= "Anniston";
	}
	
	else if ( op == 4 )
	{op=nc;
	ol = 4;
	ccb= "Durham";
	}

	else if  (op == 5)
	{op=ma;
	ol = 5;
	ccb ="Lawrence and Salem";
	}
	
	else if (op > 5)
	{ cout << "Invalid Option Selected";
		return 0;
	}
	else if (op < 0)
	{cout << "Invalid Option Selected";
	return 0;
}
	// earning below or above
	
	if ( (op == nm) && ( csalary > nm )) // NEW MEXICO
	{
	 opz = csalary - nm;
	 oaz = " above the Median Salary.";
	 cc = "Santa Fe";
	}
	
	else if ( (op == nm) && ( csalary < nm ))
	{
	 opz = nm - csalary;
	 oaz = " below the Median Salary.";
	 cc = "Santa Fe";
	} 
	
	else if ( (op == md) && (csalary > md )) // MARYLAND
	{
	 opz = csalary - md;
	 oaz = " above the Median Salary.";
	 cc = "Bethesda";
	} 	
		
	else if ( (op == md) && (csalary < md ))
	{
	 opz = md - csalary;
	 oaz = " below the Median Salary.";
	 cc = "Bethesda";
	} 	
	
	else if ( (op == al) && (csalary > al )) // ALABAMA
	
	{
	 opz = csalary - al;
	 oaz = " above the Median Salary.";
	 cc = "Anniston";
	} 	
	
	else if ( (op == al) && (csalary < al ))
	
	{
	 opz = al - csalary;
	 oaz = " below the Median Salary.";
	 cc = "Anniston";
	} 	
	
	else if ( (op == nc) && (csalary > nc )) // NORTH CAROLINA
	
	{
	 opz = csalary - nc;
	 oaz = " above the Median Salary.";
	 cc = "Durham";
	} 	
	
	else if ( (op == nc) && ( csalary < nc ))
	
	{
	 opz = nc - csalary;
	 oaz = " below the Median Salary.";
	 cc = "Durham";
	}
	
	else if ( (op == ma) && (csalary > ma )) // MASSACHUSETTS
	
	{
	 opz = csalary - ma;
	 oaz = " above the Median Salary.";
	 cc = "Lawrence and Salem";
	} 	
		
	else if ( (op == ma) && ( csalary < ma ))
	
	{
	 opz = ma - csalary;
	 oaz = " below the Median Salary.";
	 cc = "Lawrence and Salem";
	} 	
	

	
	cout<< endl << "You have entered a salary of "<< csalary << " and selected option " << ol << " for " << ccb <<"." <<endl;
	cout<< endl;
	cout<< "The Median Salary for " << cc   <<" is $" << op << ". You are currently earning $ " << opz << oaz;
	









	return 0;
}
