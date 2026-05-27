/***********************************************Learning CPP from CPP - Chapter 1*************************/


                        /*****************12.5 — Pass by lvalue reference****************/

/*
                                                            *Theory*

-> 

*/

#include <iostream>
#include <string>

void printfunc(int x, int& ref){
    std::cout<<"\nThe address of expensive parameter is = "<<&x; // will be different
    std::cout<<"\nThe address of refrence is = "<<&ref; // will be same as that of address of a
    ref = 31;
    return;
}

int main(){

    int a = 5l;

    std::cout<<"\nThe value of a is = "<<a;
    std::cout<<"\nThe address of a is = "<<&a;

    printfunc(a, a);
    
    std::cout<<"\nPost Change, a = "<<a;

    return 0;
}