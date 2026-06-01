#include <iostream>

int main(){
    using std::cout;
    using std::cin;

    //Some standard Methods:

    std::string name;

    cout<<"Enter your full name: ";
    std::getline(cin, name);
    cout<<"\nYour name is: "<<name;     // Checking if working or not
    
    cout<<"\nYour name has a length: "<<name.length();  // FOR LENGTH OF THE STRING -> Include the last Enter (\n)
    

    /*// Assigning User name:
    std::string name;
    cout<<"Enter your Name: ";
    cin>>name;

    std::string username;
    username = name;
    username.append("@gmail.com");

    cout<<"\nHi "<<name<<"\nYour Username is: "<<username;
    */
    
    return 0;
}