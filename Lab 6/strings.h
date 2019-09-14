#include <string>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

using namespace std;


// # Of Characters

int nChars(string op)
{
	int n = -1;
	n = op.length();
	return n;
}

// Character reverse

string reverse (string op)
{

	reverse(op.begin(),op.end());
	return op;
	
}
// Palindrome


bool isPalindrome(string op)
{
	string s = reverse(op);
	bool b = false;
	//int n = op.compare(s);
	int n;
	if (op.compare(s) == 0)
	{	return n = 1;
	}
	else
	{	return n = 0;
	}
	
	/*
	if ( n == 0)
	{bool b = true;}
	else if( n< 0)
	{bool b = false;
	}
	else if( n > 0)
	{bool b = false;
	}
	*/
	return n;
//	{b=1;}
//	return b;
	
	
}
 

// number of intergers

int nintegers(string op)
{
	int z = nChars(op);
	int v = 0;
	int lol=0;
	for ( v=0; v < z; v++)
	{
		if (isdigit(op[v]))
		{
			lol++;
		}
		
	
	}
	
		return lol;
}



// repeat characters

bool repeatsChar(string op)
{
	
	
	int n = 0;
	for (int m = 0; op[m]!='\0'; m++)
	{
		for (int k=m+1; op[k] !='\0'; k++)
		{
			
			if (toupper(op[m]) == toupper(op[k]))
			{
				
				n = 1;
			}
		}
	}
	
	return n;
	
}

/*	int n = nChars(op);
	string m = reverse (op);
	int f =0
	for (f != n;)
{
		
		for (int f=0; f < n; f++)
		{
			if (m[0] == op[f])
			{return true;
			}
			
			else if (m[f] == op[f])
			{return true;
			}
			
			else 
			{return false;
			}
			
			
		}	
		
}
*/

/*	int z = nChars(op);
	string tea= reverse(op);
	for (int v=0; v <z; v++)
	{ 
		if ( tea[0] == op[v] )
		{ return true;
		}
		else
		{return false;
		}
	}
*/


// upper case

void upercase(string& n) 
{
	
	for (int i=0; i < n.length(); i++)
	{
		n[i] = toupper(n[i]);	
	}
	
}

//

bool isVowel(char ch)
{
    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        return true;
    default:
        return false;
    }
}

void removeVowels(string& str)
{
    int len = str.length();

    int index = 0;

    while (index < len)
    {
        if (isVowel(str[index]))
        {
            str = str.substr(0, index) + str.substr(index + 1, str.length());
            len = str.length();
        }
        else
            index++;
    }
}


//

int nAlpha(string a)
{
	int gum = nChars(a);
	int cake = 0;
	
	for (int opz = 0; opz < gum; opz++)
	{
		if (isalpha(a[opz]))
		{
		
		cake++;}
	}

return cake;

}



	



