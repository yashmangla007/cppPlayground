/***********************************************Learning CPP from CPP - Chapter 1*************************/


                                /*****************1.4 — Variable assignment and initialization*********/

/*
*Theory*
-> When we see curly braces, we know we’re list-initializing an object.
*/

//5 common types of intialisation:

#include <iostream>
int main()
{

    int a; // default-initialization (no initializer)

    // Traditional initialization forms:
    int b = 5; /* copy-initialization (initial value after equals sign)
                  copy-initialization is also used whenever values are implicitly copied, such as when passing arguments to
                  a function by value, returning from a function by value, or catching exceptions by value.*/
    int c(6);  // direct-initialization (initial value in parenthesis)

    // Modern initialization forms (preferred):
    int d{7}; // direct-list-initialization (initial value in braces)
    int e{};  // value-initialization (empty braces)

    std::cout<<"b="<<b ;

    return 0;
}