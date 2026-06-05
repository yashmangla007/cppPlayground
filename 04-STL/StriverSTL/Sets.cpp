/*
==============================================================================================================
                                                    Theory
==============================================================================================================

----------------------------------------------------- SETS ----------------------------------------------------
-> SETS = 1. Sorted     | 2. Unique
-> All functions (erase, insert etc..) == O(logN)

-> .find() => Returns the iterator to the finded element in the set.
              in case that element is not there, it returns similar to .end()

-> .erase() =>  Can be used to erase the element in the set (while maintaining the order) or the iterator itself
                eg: st.erase(5) => Will erase the element with value 5 from the set, while maintaining the order
                incaseof multiset: .erase(_element_) => Erases all the elements in that multiset
                            but    .erase(_iterator_) => Just erases that iterator.

-> MULTISET: Only SORTED and NOT Unique
-> UNORDERED SET: Only UNIQUE and NOT SORTED (not even sorted in order of as we add elements)
                  -> All operations (generaly) == O(1)
                  -> Worst case: O(N) ==> Rare!!


*/

#include<bits/stdc++.h>
using namespace std;

void explainSet()
{
    set<int> st; //Declaration

    st.insert(1);  // {1}
    st.emplace(2); // {1, 2}
    st.insert(2);  // {1, 2}
    st.insert(4);  // {1, 2, 4}
    st.insert(3);  // {1, 2, 3, 4}

    // Functionality of insert in vector
    // can be used also, that only increases
    // efficiency

    // begin(), end(),rbegin(), rend(), size(),
    // empty() and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3);

    // {1, 2, 3, 4, 5}
    auto it = st.find(6);   // will return similar to .end()
    

    // {1, 4, 5}
    st.erase(5); // erases 5 // takes logarithmic time

    st.insert(3);
    st.insert(7);
    st.insert(9);
    //st = {1,3,4,7,9}
    auto it1 = st.find(3);
    auto it2 = st.find(7);
    st.erase(it1, it2);     //Erases the range of elements (start, end) => Start inclusive, end exclusive
    //st = {1, 7, 9}
    it1 = st.find(9);
    st.erase(it1);      // Can erase the iterator also.
    //st = {1,7}

    multiset<int> ms;
    unordered_set<int> ust;    

    int cnt = st.count(1);

    auto it = st.find(3);
}

int main(){
    return 0;
}