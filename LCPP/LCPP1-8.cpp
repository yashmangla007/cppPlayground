/***********************************************Learning CPP from CPP - Chapter 1*************************/


                          /***********1.8 — Whitespace and basic formatting**********/

/*
                                                            *Theory*

-> Witespaces Charac: characters used for formatting purposes. Space, tabs, and newlines.
-> For controlling the number of decimal places shown in floating/double var types. 
   (Will show all next decimals in the dictated format , post once defined)
    -> add : #include<iomanip>
    -> use: std::setprecision(--NoOfDIGITSNeeeded--) => for =3 ==> 112.3 = 112 | 12.34 = 12.3
    -> std::fixed ==> Tells that those digits are post the decimal and not overall digits.
                                                            
*/

/***********************************************Learning CPP from CPP - Chapter 1*************************/


                          /***********1.9 — Introduction to literals and operators**********/

/*  
                                                            *Theory*

-> A literal (also known as a literal constant) is a fixed value that has been inserted directly into the source code, and not extracted
   from any variable.
-> The number of operands that an operator takes as input is called the operator’s arity.

-> Return Values:
    - For Operators like + * / - => (Used primarilly for their return value) return value is clear. 2+5 => RV = 7
    - but for operators who are called for their side effect, return value can be confusing.
    - Both operator= and operator<< (when used to output values to the console) return their left operand. 
      Thus, x = 5 returns x, and std::cout << 5 returns std::cout. This is done so that these operators can be chained.
    - std::cout << "Hello " << "world!" evaluates as (std::cout << "Hello ") << "world!". This first prints "Hello " to the console. 
      This operation returns std::cout, which can then be used to print "world!" to the console as well.
                                                            
*/

/***********************************************Learning CPP from CPP - Chapter 1*************************/


                          /***********1.10 — Introduction to expressions***********/

/*
                                                            *Theory*

-> Witespaces Charac: characters used for formatting purposes. Space, tabs, and newlines.
                                                            
*/

#include<iostream>
#include<iomanip>   //for using the precision of floating type data

int main(){

    int c{ (2 * 3) + 4 };   // initialize variable c with computed value 10
    std::cout<<c;
    
    //checking the precision thing:
    double test1 (124.2483);
    double test2 (235.634322);
    std::cout<<"\ntest1 = "<<std::setprecision(3)<<std::fixed<<test1; //displays 1.25 (self rounded off)
    std::cout<<"\ntest2 = "<<test2; // continues using the same formating of floaters without rementioning
    
    return 0;
  }