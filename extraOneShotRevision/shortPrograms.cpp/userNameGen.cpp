#include <iostream>

int main(){
    using std::cout;
    using std::cin;

    cout<<"-Welcome to User Name generato-\nEnter your full name: ";
    std::string name;
    std::getline(cin, name);

    int space = name.find(' ');
    std::string username;

    if(name.at(0)>=65 && name.at(0)<=90 ){  //Lowercasing the Initials
        username = name.at(0)+32;
    }   

    // cout<<"\nUsername:"<<username;       //Just checking

    username.append(name.c_str() );

    return 0;
}