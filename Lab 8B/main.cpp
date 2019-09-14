// RectangleMain.cpp

#include <iostream>
#include <iomanip>       // setw
#include "Rectangle.h"
#include <stdlib.h>
#include <math.h>
#include <cmath>
#include <string>

 void displayRectangleArray (Rectangle rax[], int nx) ; 
  // calls the describe() function for each of the rectangles in the array rax 
  // one rectangle per line 
  // DONE

 void fillRectangleArray (Rectangle rax[], int nx) ; 	
//  see implementation for details on what values to use for each of the rectangles in the array rax

 int nSquares(Rectangle rax[], int nx) ; 
// returns the number of squares in the Rectangle array  

Rectangle maxPerimeter(Rectangle rax[], int nx) ; 
// returns the rectangle with the maximum perimeter in the Rectangle array 

Rectangle maxArea(Rectangle rax[], int nx) ; 
// returns the rectangle with the maximum area in the Rectangle array  

Rectangle maxDiagonal(Rectangle rax[], int nx) ; 
// returns the rectangle with the maximum digonal in the Rectangle array  

//
// Can you place the above functions in a header/implementation file 
// 

using namespace std;  ;
int Rectangle::nRectangles = 0 ;


int main()
{
        
   Rectangle r1   ;          // default constructor   l and w  == 1
 //  int popz=9;
   double s = 2.5; 
   Rectangle r2(s)  ;       	// one parameter constructor all sides == s 
   Rectangle r3(2.3, 13)   ;  	// two parameter constructor  l == 2.3 w == 3 
   Rectangle r4(13, 2.3)   ;  	// two parameter constructor  l == 2.3 w == 3 
   
   // display each Rectangles values  
   cout << "Rectangle r1 is: "  <<  r1.describe() << endl ;
   cout << "Rectangle r2 is: "  <<  r2.describe() << endl ;
   cout << "Rectangle r3 is: "  <<  r3.describe() << endl ;
   cout << "Rectangle r4 is: "  <<  r4.describe() << endl ;
  
  // STATIC CALL
   cout << endl <<  "nRectangles (STATIC) ... " << r4.getRectangles() << endl ;            
   // operator== called   in TWO different ways 
   
   // overloading an operator can be thought of redefining a function 
   // OVERLOADING == operator 
   if (r1.operator == (r2)) {  cout << "Rectangles r1 and r2 are equal " ; }  
   // same as  calling t1.operator==(t2) 
   else { cout << "Rectangles r1 and r2 are NOT equal " ;  }
   cout << endl ; 
	  
  // for r3 and r4  are they equal ?
  // the overloaded == operator  says they are NOT but they are 
  if ( r3.operator == (r4)) {  cout << "Rectangles r3 and r4 are equal " ; }  
  // same as calling r3 == r4 
  else { cout << "Rectangles r3 and r4 are NOT equal " ;  }
       
  
  cout << endl << endl ; 

        
    // AARAY of 50 RECTANGLES 

    int n = 20; 
    Rectangle ra[n]; // do NOT change 

   // fill, by using a random number function , the array of Rectangles ra[n] 
	// (see above) with 
    // (1) random doubles by in the range 10.0 – 20.0  (call your random function)
    //  use the void fillRectangleArray (Rectangle rax[], int nx) ; 

    // fill the array  
    cout << endl << "fill the array with instances of Rectangles..." << endl ; 
   fillRectangleArray ( ra, n) ;

   // (2) call the displayRectangleArray (Rectangle rax[], int nx) 
   // function to display each member of ra 

    cout << endl <<  "Display Rectangles in the array..." << endl ; 
    displayRectangleArray ( ra, n) ;
    

    int nsq = nSquares(ra, n) ; 
    cout << endl <<  "The number of squares in the array..." << nsq << endl ; 
     
  // (4) determine the rectangle with max area 
  // call the describe function for the rectangle in the array with largest area 
   //  NOT CORRECT 
       cout << endl << "the rectangle with largest area is " 
	 << endl << maxArea(ra, n).describe() << endl;  


// (5) determine the rectangle with max perimeter 
  // call the describe function for the return rectangle 
   //    NOT CORRECT 
     cout << endl << "the rectangle with largest perimeter is " 
	 << endl << maxPerimeter(ra, n).describe() << endl ;   
	 
 // (6) determine the rectangle with max perimeter 
  // call the describe function for the return rectangle 
   //    NOT CORRECT 
     cout << endl << "the rectangle with largest diagonal is " 
	 << endl << maxDiagonal(ra, n).describe() << endl;   
 
   cout << endl <<  "nRectangles (STATIC) ... " << r4.getRectangles() << endl ;       
   
  cout << endl ; 
  system("pause") ; // may be required to pause on your system 

   return 0 ; 
} // end main



// =======================================================
// implementation 
void displayRectangleArray (Rectangle rax[], int nx) 
{  
for (int j = 0 ; j < nx; j++)  
       {  
       cout << setw(3) << j << " ---" << rax[j].describe() << endl ;   
       }
}

// this fill array function is not correct 
// use your random generator function to call the setters 
 void fillRectangleArray (Rectangle rax[], int nx) 
 {
      
//      ============================================
// file the array of rectangles rax{} with the values in the array values
//  this means that the first rectangle in rax has as values  
//  l = rand() % 10 +1.1 and w = rand() % 10 +1.1 
      double values[20][2]  = { 
                                  { rand() % 10 + 1.1, rand() % 10 +1.1},
                                  { rand() % 10 + 1.2, rand() % 10 +1.2 },
                                  { rand() % 10 + 1.3, rand() % 10 + 1.3 },
                                  { rand() % 10 + 1.4, rand() % 10 + 1.4 },
                                  { rand() % 10 + 1.5, rand() % 10 + 1.5 },
                                  { rand() % 10 + 1.6, rand() % 10 + 1.6 },
                                  { rand() % 10 + 1.7, rand() % 10 + 1.7 },
                                  { rand() % 10 + 1.8, rand() % 10 + 1.8 },
                                  { rand() % 10 + 1.9, rand() % 10 + 1.9 },
                                  { rand() % 10 + 1.1, rand() % 10 + 1.1 } ,
                                  { rand() % 10 + 1.2, rand() % 10 + 1.2 },
                                  { rand() % 10 + 1.3, rand() % 10 + 1.3 },
                                  { rand() % 10 + 1.4, rand() % 10 + 1.4},
                                  { rand() % 10 + 1.5, rand() % 10 + 1.5 },
                                  { rand() % 10 + 1.6, rand() % 10 + 1.6 },
                                  { 7.8, 7.8 },
                                  { 8, 8 } ,
                                  { 4, 4 },
                                  { 6.2, 6.2 },
                                  { 1, 1 },
                                }  ;  
                                
                                 
 // This is simply a temporary fix to fill the array 
 for (int k = 0; k < nx; k++)
      {
        rax[k].setWidth(values[k][0])  ; 
	    rax[k].setLength(values[k][1])  ; 
		 
      }

 }
  

// this nSquares function is INCORRECT  
// use your isSquare() function to determine the number of squares
// in the array 

int nSquares(Rectangle rax[], int nx) 
 
  {
  	int popz=0;
  
	Rectangle t = rax[0];
	for (int i = 0; i < nx; i++)
	{
		if (rax[i].isSquare() == true)
		{
			popz++;
		}
		else
		{
			popz=popz;
		}
	}

return popz;

  } 



// this nSquares function is INCORRECT 
Rectangle maxArea(Rectangle rax[], int nx) 
{
	Rectangle t = rax[0] ; 
	
	for (int i=0; i < nx ;i++)
	{
		if (rax[i].area() > t.area())	
		{t = rax[i];
		}
		
}
	  return t	 ;  // PLACE HOLDER ONLY 
	
}


// this function is not correctly implemented  
Rectangle maxPerimeter(Rectangle rax[], int nx) 
{
	Rectangle t = rax[0] ; 
	
	
		for (int i=0; i < nx ;i++)
	{
		if (rax[i].perimeter() > t.perimeter())	
		{t = rax[i];
		}
		
}	
	
	
	
    return t	 ;  // PLACE HOLDER ONLY 
	
}

// this function is not correctly implemented  
Rectangle maxDiagonal(Rectangle rax[], int nx) 
{
	Rectangle t = rax[0] ; 
	
		for (int i=0; i < nx ;i++)
	{
		if (rax[i].diagonal() > t.diagonal())	
		{t = rax[i];
		}
		
}
	

	
	
    return t	 ;  // PLACE HOLDER ONLY 
	
}
