// ----------------------------------------------------- VECTORS ----------------------------------------------------

/*========================================== Problem 3 — Rotate the Queue ================================

You are given N integers.
Store them in a vector.
Then you are given an integer K.
Perform the following operation exactly K times:
    1. Take the first element of the vector.
    2. Remove it from the vector.
    3. Insert it at the end of the vector.

Finally, print the resulting vector.

=================================================== Solution- 3 ===============================================*/

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int N;
    cout<<"Enter the number of elements: ";
    cin>>N;

    vector<int> v(N);

    cout<<"Enter the numbers: ";
    for(int i = 0 ; i<N; i++){ 
        cin>>v[i];
    }

    int k;
    cout<<"Enter the number of rotations: ";
    cin>>k;

    int temp;
    for(int i = 0 ; i<k; i++){ 
        temp = v[0];
        v.erase(v.begin());
        v.insert(v.end(), temp);
    }

    cout<<"Final Vector: ";
    for(auto it= v.begin(); it!= v.end(); it++){
        cout<<*it<<' ';
    }

    return 0; 
}