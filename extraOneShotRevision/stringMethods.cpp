/*//Theory:
-> String is a reference data type.
-> Its size is going to be : 32 Bytes or 24 Bytes, depending on the implementation
*/

#include <iostream>

int main(){
    using std::cout;
    using std::cin;

    //size of strings:
    std::string s1 = "Hello";
    std::string s2 = "My name is Yash Mangla and this is a very big string";
    cout<<"Size of s1 = "<<sizeof(s1)<<'\n';
    cout<<"Size of s2 = "<<sizeof(s2)<<'\n';
    
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