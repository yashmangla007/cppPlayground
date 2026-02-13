// -----------------------------~Pairs~--------------------

#include<bits/stdc++.h> // Includes all the libraries
using namespace std;

int main(){

    pair<int, char> p1 = {23, 'Y'};

    cout<<"1st Element: "<<p1.first<<endl;
    cout<<"2nd Element: "<<p1.second<<endl;

    cout<<endl;

    // Using nesting and arrays:
    
    pair<pair<string, string> , float> p2 = {{"The value of ", "pi"}, 3.14};
    cout<<"1st's 1st Element: "<<p2.first.first<<endl;
    cout<<"1st's second Element: "<<p2.first.second<<endl;
    cout<<"2nd Element: "<<p2.second<<endl<<endl;


    //pair Usecase example:
    cout<<"Pairs Usecase example: "<<endl;
    pair<string, int> student[] = {{"Yash", 92}, {"Rajiv", 93}, {"Sajal", 89}};
    for (int i = 0; i < 3; i++)
    {
        cout<<student[i].first<<" -> "<<student[i].second<<endl;
    }
    


    return 0;
}