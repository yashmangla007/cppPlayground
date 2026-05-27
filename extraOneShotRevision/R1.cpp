// /*
#include <iostream>

int main(){

    //New Datatypes:
    bool statement1 = true;
    bool statement2 = false;
/*
    //Strings:
    std::string name = "Yash";
    std::cout<<"Hello "<<name;

    std::cout<<"\nPlease enter your major: ";
    std::string major;
    std::cin>>major;                            // Doesnot allow to store post space
    std::cout<<"\nYour major is "<<major;
    std::cout<<"\nRemaining in Buffer: ";
    std::cout<<major;
*/
    //Alowing whitespaces - {enter} as inputs
    std::string fullname;
    std::cout<<"\nEnter your full name: ";
    std::getline(std::cin, fullname); // used to take innput until ENTER is pressed.
    std::cout<<"\nYour full name is: ";
    std::cout<<fullname;
    // getline problem: if before using getline, buffer mein \n hua, then vo use accept kar lega.
    // to prevent that:
    std::getline(std::cin>> std::ws, fullname);
    std::cout<<"\nYour full name is: ";
    std::cout<<fullname;
    

    
    
    //Working with constants:
    // adding const before variable type makes its value a constant. Cant be changed later. Read-only effectively
    const double PI (3.14159); // by convention, constants are named in UPPERCASE
    double radii (21);
    // PI = 0; --> Changing the value is Invalid now.
     std::cout<<"\nArea of the circle is = "<<PI*(radii*radii);


    return 0;
}
// */


// About Constants:

