// ----------------------------------------------------- QUEUE ----------------------------------------------------

/*========================================== Problem 1 - K Largest Numbers ================================

You are given:
N integers
Store them in a max priority queue.
Then print the largest K numbers in decreasing order.

=================================================== Solution- 1 ===============================================*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cout<<"Enter number of integers you want to input: ";
    cin>>N;
    priority_queue<int> q1;
    int input;

    cout<<"Enter the integers: ";
    for(int i=0; i<N; i++){
        cin>>input;
        q1.push(input);
    }

    int k;
    cout<<"How many integers you want output: ";
    cin>>k;

    for(int i =0; i<k; i++){
        cout<<q1.top()<<" ";
        q1.pop();
    }

    return 0;
}