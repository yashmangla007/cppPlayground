// ----------------------------------------------------- SETS ----------------------------------------------------

/*========================================== Problem 1 - Remove Duplicates ================================

You are given N integers.
Store them in a set<int> and print all distinct elements in increasing order.

=================================================== Solution- 1 ===============================================*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int N, x;
    cout<<"Enter N: ";
    cin>>N;

    set<int> st1;
    cout<<"Enter the integers: ";
    for(int i = 0 ; i<N; ++i){
        cin>>x;
        st1.insert(x);
    }

    cout<<"Your Input in ordered form is: ";
    for(auto it = st1.begin() ; it != st1.end() ; ++it){
        cout<<*it<<" ";
    }

    return 0;
}