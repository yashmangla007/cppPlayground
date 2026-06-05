// ----------------------------------------------------- SETS ----------------------------------------------------

/*========================================== Problem 2  — First Repeated Number ================================

You are given N integers.
Print the first number that appears for the second time while reading from left to right.
If no number repeats, print:    NO REPETITION

=================================================== Solution- 1 ===============================================*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int N, x, repeat;
    cout<<"Enter N: ";
    cin>>N;
    bool found = false;

    set<int> st1;
    cout<<"Enter the integers: ";
    for(int i = 0 ; i<N; ++i){
        cin>>x;
        if(st1.count(x) != 0){
            repeat = x;
            found = true;
            break;
        }
        st1.insert(x);
    }

    if(found != false) cout<<"First Repeated element is: "<<repeat;
    else cout<<"No Element Repeated! ";
    return 0;
}