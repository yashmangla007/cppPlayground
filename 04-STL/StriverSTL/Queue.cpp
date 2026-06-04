/*
==============================================================================================================
                                                    Theory
==============================================================================================================

----------------------------------------------------- QUEUE ----------------------------------------------------
-> FIFO principle (First In First Out)

->  .back() -> Returns a reference to the last element. 
    (O(1))     Returns the value of the last added element
               Can perform modification operations ( = , += , -= etcc)

->  .front() -> Returns a reference to the first element.
    (O(1))      Rest is similar to .back()

->  .pop() -> Removes the earliest added element.
    (O(1))    returns nothing. Cant use in cout.

-> .size() -> != sizeof()=> Doesnt return the size, 
    (O(1))    Returns the number of elements.

=> PRIORITY QUE: Maintain general descending order type: (Highest element stays at the begining/ 1st element)

**ATM** 
Stack:
push  O(1)
pop   O(1)
top   O(1)

Queue:
push  O(1)
pop   O(1)
front O(1)
back  O(1)

Priority Queue:
push  O(log n)
pop   O(log n)
top   O(1)

*/

#include<bits/stdc++.h> // Includes all the libraries
using namespace std;

void explainQueue()
{
    //Declaration:
    queue<int> q;

    //basic functions:
    q.push(1);    // {1}
    q.push(2);    // {1,2}
    q.emplace(4); // {1, 2, 4}

    // For {1,2,4} -> q.back = 4, q.front = 1
    q.back() += 5; // => q = {1, 2, 4+5 } => q = {1, 2, 9}

    cout<<"q.back"<< q.back(); // prints 9

    // Q is {1, 2, 9}
    cout << q.front(); // prints 1

    q.pop(); //now q = {2,9}    // removes the earliest added element

    cout << q.front(); // prints 2

    cout<<"Size: "<<q.size();
    // size swap empty same as stack

    
}
//=================================
// PRIORITY QUEUE   

void explainPriorityQueue() {

    priority_queue<int> pq;

    pq.push(5);     // {5}
    pq.push(2);     // {5,2}
    pq.push(8);     // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    cout << pq.top(); // prints 10

    pq.pop(); //{8,5,2}

    cout << pq.top(); // prints 8

    // size swap empty function same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);     // {5}
    pq.push(2);     // {2, 5}
    pq.push(8);     // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout << pq.top(); // prints 2
    
}

int main(){
    explainQueue();
    return 0;
}