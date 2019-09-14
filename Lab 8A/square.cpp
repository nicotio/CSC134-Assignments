// Square.cpp
// implementation of functions in the header file Square.h 

 #include "Square.h"
 #include <stdio.h>
 #include <math.h>

Square::Square()  // default constructor  side ==  1  
 {  
   side = 1 ; 
 }
 
 
 Square::Square(int x)  //  constructor initializes side to  the parameter if > 1   
 { 
   if (x >1 )   side = x ; 
   else side = 1; 
 }

void Square::setSide (int x) {
  side = x;
}

int Square::area () {
  return side*side ; 
}

int Square::perimeter () {
  return 4*side ; 
}


int Square::getSide () {
  return side ; 
  
}

double Square::diagonal () {
	
	double d = side*sqrt (2);
    
  return d ; 
  
}
