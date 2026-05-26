/***********************************************Learning CPP from CPP - Chapter 1*************************/


                                /*****************1.4 — Variable assignment and initialization*********/

/*
*Theory*
-> When we see curly braces, we know we’re list-initializing an object.
-> NARROWING CONVERSION: if we use int __ = 3.5, then if compiler senses it as int __ = 3, then it is Narrowing conversion.
-> About unused variables:
    sometimes, we dont use variables into anything, we just define and iniitalise them but not use
    eg: double pi (3.14);
    now, compiler might flag them as warnings or even errors (if warning ^ errors)
    thus use:
    [[maybe_unused]] double pi (3.14);

*/

//5 common types of intialisation:

#include <iostream>
int main()
{

    int a; // default-initialization (no initializer)

    // Traditional initialization forms: 
    int b = 5; /* copy-initialization (initial value after equals sign) (ALLOWS NARROWING CONVERSIONS)
                  copy-initialization is also used whenever values are implicitly copied, such as when passing arguments to
                  a function by value, returning from a function by value, or catching exceptions by value.*/
    int c(6);  // direct-initialization (initial value in parenthesis) (ALLOWS NARROWING CONVERSIONS)

    // Modern initialization forms (preferred):  (DONOT ALLOW NARROWING CONVERSIONS)
    int d{7}; // direct-list-initialization (initial value in braces)
    int e{};  // value-initialization (empty braces)

    //Using Maybe Unused
    [[maybe_unused]] float pi (3.14);

    std::cout<<"b="<<b ;

    return 0;
}