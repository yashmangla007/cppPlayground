/***********************************************Learning CPP from CPP - Chapter 1*************************/


                        /*****************12.1 — Introduction to compound data types****************/

/*
                                                            *Theory*
-> Compound Data types:
   Functions, C-Style Pointers | Pointer types (Pointer to object, Pointer to function) |
   Pointer to member types (to data member, to member functions) | references types (L-value, R-value) |
   Enumerated types (Unscopped enumerations, Scoped Enumerations) | Class Types (Structs, Clases, Unions)

*/
//-----------------------------------------------------------------------------------------------------------

/***********************************************Learning CPP from CPP - Chapter 1*************************/


                    /*****************12.2 — Value categories (lvalues and rvalues)****************/

/*
                                                            *Theory*
-> Lvalue expressions evaluate to an identifiable object. (its like pointing to x (object) which has a value 5)
-> Rvalue expressions evaluate to a value. (its like pointing to anything =5)
-> lvalues --> Modifiable
           |-> Non Modifiable

-> Assignment operator (=): for ___ = ____ => LHS to be modifiable lvalue and RHS to be rvalue
*/

int return5()
{
    return 5;
}

int main()
{
    int x{ 5 };                 // 5 is an rvalue expression
    const double d{ 1.2 };      // 1.2 is an rvalue expression

    int y { x };                // x is a modifiable lvalue expression
    const double e { d };       // d is a non-modifiable lvalue expression
    int z { return5() };        // return5() is an rvalue expression (since the result is returned by value)

    int w { x + 1 };            // x + 1 is an rvalue expression
    int q { static_cast<int>(d) }; // the result of static casting d to an int is an rvalue expression

    return 0;
}