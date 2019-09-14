
// Square.h 
class Square  {
  private: 		// private only 
    int side ;	// data item 
  public:
  	Square() ;
  	Square(int) ; 
    void setSide (int );
    int area ();		// no parameters to generate the area 
    int perimeter ();	// no parameters to generate the perimeter
    int getSide() ;	    // display the side 
    double diagonal() ; // return the diagonal 
} ;  					// ; is REQUIRED 
