/***********************************************Learning CPP from CPP - Chapter 1*************************/


                        /*****************12.5 — Pass by lvalue reference****************/

/*
                                                            *Theory*

-> When to use or not use Pass by Value or Reference?
    -> 2 major costs are involved while passing to a function: cost of copying/binding, cost of accessing
    -> Each time a value parameter is used, the running program can directly access the storage location 
       (CPU register or RAM) of the copied argument. However, when a reference parameter is used, there 
       is usually an extra step. The running program must first directly access the storage location 
       (CPU register or RAM) allocated to the reference, in order to determine which object is being referenced. 
       Only then can it access the storage location of the referenced object (in RAM).
    -> Therefore, each use of a value parameter is a single CPU register or RAM access, whereas each use of a 
       reference parameter is a single CPU register or RAM access plus a second RAM access.
    -> Third, the compiler can sometimes optimize code that uses pass by value more effectively than code that 
       uses pass by reference.
-> NOTE:==> -> For objects that are cheap to copy, the cost of copying is similar to the cost of binding, 
               but accessing the objects is faster and the compiler is likely to be able to optimize better.
            -> For objects that are expensive to copy, the cost of the copy dominates other performance considerations.
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