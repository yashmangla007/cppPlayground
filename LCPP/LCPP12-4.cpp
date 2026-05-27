/***********************************************Learning CPP from CPP - Chapter 1*************************/


                        /*****************12.4 — Lvalue references to constants****************/

/*
                                                            *Theory*
-> Simple binding lvalue ref to a const using const lvalue ref only
-> If we refer to a non-constant, using a constant lvalue reference, then, we wont be able to change the object
   value using the reference, however, can change the value via object identifier itself.
-> We can also, bind rvalue constants, using lvalue references to constants (temp object gets created)


*/


#include <iostream>

int main(){

    //Assigning dif data type rvalue to lvalue reference to const
    const double& r1 {4.32};
    const double& r2 {312};
    // const int& r4 {23.4};    //Invalid
    char c = 'd';
    // r1 = 3.14159;   // We cant change the value now. Since we used lvalue ref for an rvalue
    const int& r3 (c);
    std::cout<<"\nr1 = "<<r1; //prints 4.32
    std::cout<<"\nr2 = "<<r2; //prints 312
    std::cout<<"\nr3 = "<<r3; //prints 100 (Since ref was int)



    return 0;
}