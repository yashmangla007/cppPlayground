/*
==============================================================================================================
                                                    Theory
==============================================================================================================

----------------------------------------------------- STACK ----------------------------------------------------
-> A stack is a container adapter that follows the LIFO (Last In, First Out) principle.
-> internally, stack acts as a deque operations.
-> also, stack is not like other containers, it is different from vectors, ques etc. as it is more like It wraps
   another container and exposes only stack operations.


=============================================================================================================*/

#include<iostream>
#include<stack>         //Stack--> Must incluce this header files
#include<list>
#include<vector>
using namespace std;

void explainStack(){

    //Declaration:
    stack<int> st1; //basic declaration
    stack<int, vector<int>> st2;    // => stack<DataType, UnderlyingContainer> name;
    stack<int, list<int>> st3;

    //Core->Operations
    //1. push   2.pop()  3. top()   4. empty()      5. size()
    st1.push(12);
    st1.push(31);
    st1.push(2);    //                          TOP
    /*By above 3 statements, stack is like:   |  2   |
                                              |  31  |
                                              |  12  |
                                              |______|*/
    //Before: st1 = {2, 31, 12}
    st1.pop();      // Rmeoves the pop element      RETURNS NOTHING 
    //after pop:  st1 = {31, 12}

    st1.top();     //Returns reference to the top element. -> will return 31
    st1.top() = 69;     // Can do modification also
    // st1 = {69, 31, 12}
    
}


int main(){
    return 0;
}