// Rectangle.cpp  
 
 #include "Rectangle.h"
 #include <stdio.h>
 #include <math.h>
 #include <cmath>
 #include <stdio.h>
 
 
  // constructors =============================
  // default constructor set sides = 1 
   Rectangle::Rectangle( )  { 
      l = 1; w = 1; 
	  nRectangles++ ;  // increment static counter 
	 
	   }   
       
   //  constructor l and w = x 
   Rectangle::Rectangle( double x) 
   { 
     l = x; 
     w = x; 
     nRectangles++ ;  // increment static counter 
     
   }   
    // constructor  
   Rectangle::Rectangle( double x, double y) 
   {  
        l = x ; w = y ;  
		 nRectangles++ ;  // increment static counter  
   } 

        
  // ==========================================
  // class functions 
   double Rectangle::area() 
   {  double a = 0;
   		a = w*l;
 		return a;
   }
   //Area DONE

   double Rectangle::perimeter() { double p = 2*(l+ w);  return p;  }  
  // compute perimeter DONE
  
   double Rectangle::diagonal() 
   { double d = 0.0 ; 
	double nx , mx;
	double power=2;
	
	 if ( l == w)
	{
	 d = w*sqrt (2);
	 return d;
	}
	
	else 
	{
	
	nx = pow (l,power);
	mx = pow (w,power);
	d = sqrt (nx + mx);
	return d;
}
 
  // Diagonal DONE
}
  double Rectangle::getLength() { return l  ; } 
  
  
  double Rectangle::getWidth() { return w ; } 
   
  // setters almost DONE
  void Rectangle::setLength(double x) { 
  if (x <=  0) 
  { l = 1 ; }
  else 
  { l = x ;  } 
  // DONE SET LENGTH
  
  }
  void Rectangle::setWidth(double x) 
  { 
    if (x <=  0) 
  { w = 1 ; }
  else 
  { w = x ;  } 
  
  } 
    // DONE SET WIDTH

  double Rectangle::largerSide ()  
  { double max = 0 ; 
  	if (w > l)
  	{return max = w;
  	}
  	else if (w < l)
  	{return max = l;
  	}
  	else if (w == l)
  	{return max = w;
  	}
  
  	return max ;
	}  

// DONE LARGER SIDE
  
   double Rectangle::smallerSide ()  
   { int min = 0 ; 
   
   if (w < l)
   { return min = w;
   }
   
   else if (w > l)
   {return min = l;
   }
   
   else if (w == l)
   { return min = w;
   }
   return min  ; 
   
   
   
   
   }   
   // DONE Smaller side

   bool Rectangle::isSquare() { bool b = false; 
   if ( l != w)
   { return b;
   }
   else
   { b = true;
   return b;
   }
   
   return b  ; }   

// IS IT SQUARE? DONE

        
	string Rectangle:: typeRectangle () 
  	 {
  	 	
	   string s = "square"  ;
  	 string op = "rectangle" ;
  	 
  	 if ( l == w)
  	 { 
  	 	return s;
  	 }
    else 
    {	
    	return op;
    	
    }
    
	} 
      //  return "square"  if l == w 
      //  otherwise return “rectangle” 
      // make sure isSquare() is called
      // INCORRECT fix
 
             
   // DOne
   bool Rectangle::operator==( const Rectangle other) // are two rectangles equal ? 
   {   
     bool b = false ;
     if (l == other.l && w == other.w )  {
      b = true;}
     else if (l ==other.w && w == other.l) { b=true;
     }

     
    return b ; 
    }
    
    // DONE
   string Rectangle::describe() 
    { 
       stringstream ss;
	   string s ; 
       ss << " length = " << getLength() << " width = " << getWidth()  
          << "\narea = " << area() << " perimeter = " << perimeter ()  
		  << "\ntype = " << typeRectangle() << " diagonal = " << diagonal() 
            << " \nIs a square ?? " << boolalpha << isSquare() << endl;   ;   
       s = ss.str();
         return s; 
   }  
  




