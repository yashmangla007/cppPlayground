/***********************************************Learning CPP from CPP - Chapter 1*************************/


                                /****************************1.1**************************/

/*
*Theory*
-> Statement: A statement is an instruction in a computer program that tells the computer to perform an action.
-> Function: A function is a collection of statements that executes sequentially.
-> Every program must have a Main funtion.
*/

// Using namespace :
// In genral, used to tell compilor ki konsi library mein se ye vala function (Jo iske aage use)
// karegne, vo defined hai, since eg: 
// library1::print();
// library2::print();

// BY USING NAMESPACE 
#include <iostream>
using namespace std;    //ek baar ye likhne ke baad,
                        //duabara har statement mein nhi likhna hota hai
int main(){
    cout<<"Hello World Again!!";
    return 0;
}


// without using namespace:
#include <iostream>
int main(){
    std::cout<<"Hellow World Again!!"; // we have to write std:: everywhere
    return 0;
}




