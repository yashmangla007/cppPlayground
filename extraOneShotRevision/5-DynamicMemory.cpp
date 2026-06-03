/*  
================================================================================================================
                                                        Theory
================================================================================================================
-> Why Option 2 and not 1---\
or Why use dynamic       ---/   Because modern day compilers (some GCC ones) may allow Option 1 but not all does
================================================================================================================
->                  ~How to create an dynamic array~
    S1: make a same data type pointer (say: int *ptr = nullptr;)
    S2: then dynamically make it array: ptr = int[--ReqrdSize--];

-> NOTE : It is genreally good to delete the provided dynamic memory, once used succesfully
=================================================================================================================
*/

//:=============================##OPTION 1:=============================
/*
#include<iostream>

int main(){

    int size;
    std::cout<<"Enter the number of enteries: ";
    std::cin>>size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        std::cout<<"Enter your entery #"<<i+1<<": ";
        std::cin>>arr[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        std::cout<<arr[i]<<' ';
    }
    
    return 0;
}
    
*/
//==============================================================================================================
// =================Option-2=================

#include <iostream>

int main(){
    
    int *ptr = nullptr;
    int size;

    std::cout<<"Enter the number of enteries: ";
    std::cin>>size;

    ptr = new int[size];    // creating the array dynamically!

    //                                | *Stack*        |           *Heap*        |      As ptr lives in stack
    // Now Memory configration is ==> |  -----         |        ---------------- |=>    as it is a local variable
    //                                |  ptr           |        [10][20][30][40] |      but array lives in heap
     
    for (int i = 0; i < size; i++)
    {
        std::cout<<"Enter your entery #"<<i+1<<": ";
        std::cin>>ptr[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        std::cout<<ptr[i]<<' ';
    }

    delete[] ptr;

    //----Post delete ptr:
    //                                | *Stack*        |           *Heap*        |        Array is removed from
    // Now Memory configration is ==> |  -----         |        ---------------- |=>      the memory
    //                                |  ptr           |        ---------------- |        yet the ptr remains

    return 0;
}