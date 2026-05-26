/***********************************************Learning CPP from CPP - Chapter 1*************************/


                          /***********1.5 — Introduction to iostream: cout, cin, and endl**********/

/*
                                                            *Theory*
-> << = Insertion operator
-> >> = Extraction Operator

-> Buffer: When a statement wants to send the output to the console, it is not sent to console immediately. Instead, the requested 
           output “gets in line”, and is stored in a region of memory set aside to collect such requests (called a buffer).
           Periodically, the buffer is flushed, meaning all of the data collected in the buffer is transferred to its destination 
           (in this case, the console). 

-> USE \n INSTEAD OF std::endl --> because: 1. endl uses multiple flushes | 2. slower to write
-> in general, use "\n" and not '\n', although, both are true          

-> Adding data to the end of a buffer and removing it from the front of a buffer ensures data is processed in the 
   same order in which it was added. This is sometimes called FIFO (first in, first out).
   - THUS, cin: as Characters entered, are stored in end of input buffer. Also, final enter is stored as \n 
   - The extraction operator ‘>>’ removes characters from the front of the input buffer and converts them into a value that is 
     assigned (via copy-assignment) to the associated variable. This variable can then be used in subsequent statements.

-> Hota kya hai Step by Step: CODE: std::cin>>X;
    1. Compiler reads "std::cin" => creates a buffer such that. Eg: if i wrote 1234, then 1 will be added, then 2, then 3, then 4.....
                                    until encoutered with an ENTER
    2. Compiler reads ">>" => Now it extarcts the value from the buffer, like 1 is extracted, 
                              then 2 then 3......upto encoutered with a whitespace character (spaces, enter etc..)
    3. Compiler reads "X" => The extracted value is added to X variable via copy-assignment. 
    -> Conflict case: If I enter input as : 1 6 --> this will be stored in buffer as: 1 6\n
                      now, >> will take as 1 from buffer, leaving 6 for later extraction, and when the next >> is used, it will 
                      automatically take value 6 without even checking that repective cin value.

*/


#include <iostream>

int main(){

    std::cout<<"Hi,";
    std::cout<<"My name is Yash.";      // not used any next line or new line thing.


    std::cout<<"\nHi,"<<std::endl;
    std::cout<<"My name is Yash."<<std::endl;

    std::cout<<"Hi,\n";
    std::cout<<"My name is Yash"<<'\n';
    
    //understading cin and >> 
    // (run both below block 1 and 2, firslty with Block 1 commented out, then not commented out)

    std::cout<<"\nEnter your age: ";        
    int age;                                 
    std::cin>>age;
    std::cout<<"Your age is: "<<age;

    std::cout<<"\nEnter your age with a space: "; 
    int x; 
    std::cin>>x;
    std::cout<<"\nAge: "<<x;

    return 0;
}




                          /***********1.6 — Uninitialized variables and undefined behavior**********/

/*
                                                            *Theory*
-> Initialized = The object is given a known value at the point of definition.
-> Assignment = The object is given a known value beyond the point of definition.
-> Uninitialized = The object has not been given a known value yet.

*/


                          /***********1.7 — Keywords and naming identifiers**********/

/*
                                                            *Theory*
-> Rules for naming the identifiers:
    1. It is conventional in C++ that variable names should begin with a lowercase letter.
       If the variable name is a single word or acronym, the whole thing should be written in lowercase letters.
    2. Avoid naming your identifiers starting with an underscore. Although syntactically legal, these names are 
       typically reserved for OS, library, and/or compiler use.
    3. The name of your identifiers should make clear what the value they are holding means (particularly if the units aren’t obvious).s

*/

#include <iostream>

int main(){

    // Types of Indetifier naming: 

    int my_variable_name;   // conventional (separated by underscores/snake_case)
    int my_function_name(); // conventional (separated by underscores/snake_case)
    int myVariableName;   // conventional (intercapped/camelCase)
    int myFunctionName(); // conventional (intercapped/camelCase)

    /*
    int my variable name;   // invalid (whitespace not allowed)
    int my function name(); // invalid (whitespace not allowed)
    */

    int MyVariableName;   // unconventional (should start with lower case letter)
    int MyFunctionName(); // unconventional (should start with lower case letter)

    return 0;
}