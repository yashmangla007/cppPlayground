// -----------------------------~Pairs~--------------------
/*
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
}*/

// -----------------------------~VECTORS~--------------------

#include<bits/stdc++.h>
using namespace std;

int main(){

        vector<int> v1;
        v1.push_back(21); // v1 = {21}
        v1.emplace_back(122); // v1 = {21, 122}

        vector<int> v2 (5); //      v2 = {__ , __ , __ , __ , __}
        vector<int> v3(4, 20); //   v3 = {20,20,20,20,20}
        v3.emplace_back(2);
        cout<<v3[4];
        
        vector<int> v2(v3); //      v2 = {20,20,20,20,20}
 
    // using pairs as a data type in Vector:

    vector<pair<int, int>> v4;
    v4.push_back({12,11}); // v2 = {{12,11}}
    v4.emplace_back(32,23);// v2 = {{12,11}, {32,23}}


    return 0;
}
