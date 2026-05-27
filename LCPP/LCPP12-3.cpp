/***********************************************Learning CPP from CPP - Chapter 1*************************/


                                    /*****************12.3 — Lvalue references****************/

/*
                                                            *Theory*

-> lvalue refrences: two types (to a non constant, to a constant)
-> for creating a lvalue reference to a data type: Syntax =>    _datatype_& _referencename_ = _objectRefTo
                                                            eg:  int& refa (a);
-> NOTE: the ampersand in this context does not mean “address of”, it means “lvalue reference to”.
-> If non-const lvalue references could be bound to non-modifiable (const) lvalues or rvalues, then you would 
   be able to change those values through the reference, which would be a violation of their const-ness.
-> When a reference is initialized with an object (or function), we say it is bound to that object (or function).
   The process by which such a reference is bound is called reference binding. The object (or function) being 
   referenced is sometimes called the referent.
-> Dangling Reference: When Object dies out before its reference does, it is dangling reference. 

*/


#include <iostream>

int main (){

    int a (6);      // Standard integer type variable with a value 5
    int& refa (a);  // creating a "lvalue reference to an integer" data type variable named 'refa' refering to 
                    // lvalue of variable a
    //

    std::cout<<a<<'\n';
    std::cout<<refa<<'\n';

    a = 65;
    std::cout<<a<<'\n';
    std::cout<<refa<<'\n';

    //modifying value via reference
    refa = 43;
    std::cout<<a<<'\n';
    std::cout<<refa<<'\n';


    //Reference intialisations and Thier matching Data types (mostly):
    int x =1, y=2;
    double z=3.212;
    int& ref1x (x);
    double& ref1z = z;
    //invalid refrences:
    /*
    int& ref2x ;        // not binded intialisation
    int& ref2z {z};     // z = double type, so cant intialise with int&
    int& ref3z = z;     // z = double type, so cant intialise with int&
    */

    // References can’t be reseated (changed to refer to another object)
    int n1 = 69;
    int n2 = 67;
    int& refn1 (n1);
    std::cout<<"\nPreChange";
    std::cout<<"\nn1 = "<<n1;
    std::cout<<"\nrefn1 refers to value: "<<refn1;
    refn1 = n2;     //-----------------------------> Put the value of n2 into the object refred to by refn1
    std::cout<<"\nPostChange";
    std::cout<<"\nn1 = "<<n1;
    std::cout<<"\nn2 = "<<n2;
    std::cout<<"\nrefn1 refers to value: "<<refn1;


    
    return 0;
}