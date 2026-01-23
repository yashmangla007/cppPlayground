/*
#include<iostream>
#include<string>
using namespace std;

int main(){

    string s = "My name is ";
    // cout<<"Enter your First name : ";
    string s1;
    // cin>>s1; // >> =Takes only before space
    cout<<"Enter your full name : ";
    getline(cin, s1);

    cout<<s<<s1;

    return 0;
}
*/


// -----------------------------~Practising inbuild string functions~--------------------
#include<iostream>
#include<string>
// #include<algorithm> // Needed to be included
using namespace std;

int main(){

    
    string str = "Coding Cpp";
    string str2 = " in VS Code";
    
    // cout<<"Original String: "<<str<<endl;
    // reverse(str.begin()+4, str.end());
    // cout<<"Reversed String: "<<str<<endl;
    // cout<<"Concatenated string: "<<str+str2<<endl;
    // cout<<"str: "<<str<<" | "<<"str2: "<<str2<<endl;

    cout<<"Lenght of String: "<<str.length();
    cout<<"Size of String: "<<str.size();
    

    return 0;
}