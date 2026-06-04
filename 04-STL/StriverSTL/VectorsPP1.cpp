// ----------------------------------------------------- VECTORS ----------------------------------------------------

/*======================================= PracticeProblem 1 — Remove All Occurrences ================================

You are given an integer N and then N integers.
Store them in a vector.
Then you are given another integer X.
Remove all occurrences of X from the vector and print the remaining elements in the same order.

=============================================== Solution- 1 ===============================================*/

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int N, input;
    vector<int> v1;

    cout<<"\nEnter the number of integers you want to input: ";
    cin>>N;

    cout<<"Enter your integers (Seperate each with a space): ";
    for(int i=0; i<N; i++){
        cin>>input;
        v1.push_back(input);
    }
    
    int remove;
    cout<<"\nEnter the integer needed to be removed: ";
    cin>>remove;
    
    for(auto it= v1.begin(); it != v1.end();){
        if(*it==remove){
            it = v1.erase(it);
        }
        else{
            it++;
        }
    }

    cout<<"Vector post removal = ";
    for(auto it= v1.begin(); it != v1.end(); it++ ){
        cout<<*it<<" ";
    }

    return 0;
}