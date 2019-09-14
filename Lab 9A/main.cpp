/*#include <iostream>
#include "Triangle.h"

int main() 
{



cout << Triangle(2).area() << endl;

cout << Triangle(2).getSide1() << endl;
cout << Triangle(2).getSide2() << endl;
cout << Triangle(2).getSide3() << endl;


cout << Triangle(2,3,4).largestSide() << endl;
cout << Triangle(2,3,4).smallestSide() << endl << endl;

cout  << Triangle (4,5,7).typeTriangle() << endl;
cout  << Triangle (5,5,13).typeTriangle() << endl;
cout  << Triangle (3,3,3).typeTriangle() << endl;
cout  << Triangle (3,2,7).typeTriangle() << endl;

cout << Triangle (3,4,5).isTriangle() << endl;
cout << Triangle (2,3,10).isTriangle() << endl;

cout << Triangle (3,4,5).operator==(Triangle(4,5,3));

	return 0;
}

*/


// TriangleMain.cpp
// ================

#include <iostream>
using namespace std;  

#include "Triangle.h"

// function main begins program execution
int main()
{
   // creating 5 instances (objects) of the class Triangle     
   Triangle t1   ;                   // default constructor   all sides == 1 SEE Triangle() 
   cout << "enter one side for triangle t2..." ;  
   int s ;  cin >> s ;  
   Triangle t2(s)  ;                 // one parameter constructor all sides == s SEE Triangle (int)
   
   Triangle t3(3, 10, 5)  ;         // three parameter constructor   s1 == 33 s2 == 10  s3 == 5 See Triangle(int, int, int) 
   Triangle t4(10,3,5) ;            // three parameter constructor   s1 == 10 s2 == 33  s3 == 5 NOT a triangle 
   cout << endl; 
   
    cout << "enter three sides for triangle t5..." << endl << 
      " with a space between the three values... ";
    int x = 0; int y = 0; int z = 0 ;
    cin >> x >> y >> z; 
     Triangle t5(x, y, z) ; // three parameter constructor Triangle(int, int, int) 
     
    cout << endl << "====Some of the properties of the triangles ===============" << endl ;
   // display each triangles properties  
    cout << "triangle t1 properties.."  << endl ;
    cout << "sides are..." <<  t1.getSide1() << "  "  << t1.getSide2() << "  " << t1.getSide3();
      cout << endl << "perimeter is: "  <<  t1.perimeter() << endl ;
    cout << "describe function: " << t1.describe() << endl << endl ; 
        
    cout << "triangle t2 properties.."  << endl ;
    cout << "sides are..." <<  t2.getSide1() << "  "  << t2.getSide2() << "  " << t2.getSide3();
    cout << endl << "perimeter is: " << t2.perimeter() << endl ; 
    cout << "describe function: " << t2.describe() << endl << endl ; 
    
    cout << "triangle t3 properties.."  << endl ;
    cout << "sides are..."<<  t3.getSide1() << "  "  << t3.getSide2() << "  " << t3.getSide3(); 
    cout << endl << "perimeter is: " << t3.perimeter() << endl  ; 
    cout << "describe function: " << t3.describe() << endl << endl ; 
           
    cout << "triangle t4 properties.."  << endl ;
    cout << "sides are..." <<  t4.getSide1() << "  "  << t4.getSide2() << "  " << t4.getSide3();
    cout << endl << "perimeter is: " << t4.perimeter() << endl  ; 
    cout << "describe function: " << t4.describe() << endl << endl ; 
            
    cout << "triangle t5 properties.."  << endl ;
    cout << "sides are..." <<  t5.getSide1() << "  "  << t5.getSide2() << "  " << t5.getSide3();
    cout << endl << "perimeter is: " << t5.perimeter() << endl  ; 
    cout << "describe function: " << t5.describe() << endl << endl ; 
    
        // calling the overloaded == operator...          
        cout << " operator== called   in TWO different ways..." << endl ; 
        if (t1.operator == (t2)) {  cout << "triangles t1 and t2 are equal " ; }   // same as  calling t1.operator==(t2) 
        else { cout << "triangles t1 and t2 are NOT equal " ;  }
        cout << endl << endl ; 
        if (t3.operator==(t4) ){  cout << "triangles t3 and t4 are equal " ; }   // same as  calling t1.operator==(t2) 
        else { cout << "triangles t3 and t4 are NOT equal " ;  }
        
        //  NOTE:  t1 == t2 vs t3.operator==(t4) calls 
        //  overloading an operator can be thought of redefining a function
        // NOTE that t3 and t4 are equal although the code does NOT return that result  
        cout << endl << endl ; 
        


	   	return 0 ; 
} // end main

