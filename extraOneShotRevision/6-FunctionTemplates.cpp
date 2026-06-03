/*  
================================================================================================================
                                                        Theory - Function Tempelates
================================================================================================================
-> Problem: if we want same operation on different data types, we need to define function with multiple/all the
            the data types we need it to support.
-> Solution: We define function with like an imaginary data type, that adjusts itself to the provided data type 
             from the main function.             

// function template =   describes what a function looks like.
                            Can be used to generate as many overloaded fi
                            each using different data types.

-> CODE:
        template <typename --RefNameOfDataType-->           // You may use multiple typename also


*/


#include<iostream>

template<typename X, typename Y>

auto max( X a, Y b){   // its like writing : auto max (int a, double b) 
    return (a > b) ? a : b ;        //           (but this time, datatypes will be choosen by main call                     
}                                   //            and not the function definition itself)

int main(){

    int data1 = 32;
    double data2 = 34.65;

    std::cout<<"The bigger one is: "<<max(data1, data2);

    return 0;
}