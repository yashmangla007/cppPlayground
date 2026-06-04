/*
==============================================================================================================
                                                    Theory
==============================================================================================================

----------------------------------------------------- VECTORS ----------------------------------------------------

-> Vector is dynamic in nature. Use like an array when size of element is unknown.
-> Internally, a singly linked list is maintained


CODE:           vector <_dataType_> _name_ ; 
                                            Refer to OneNote Notebook for Theory Explainnation.
*/
// *************************************************************************************************************

#include<iostream>
#include<vector>        //Must include the header file for vectors
using namespace std;

void explainVector(){

//=========================================================================================================
//                              Simple Declaration and element additions:
    
    vector<int> v;      //Simple Vector declaration, makes an empty vector, v = {}
 
    v.push_back(1);     // v = {1}      => Simply adds the element
    v.emplace_back(2);  // v = {1,2}    => Simply adds the element, but faster than push_back

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});      // vec = {{1,2}}
    vec.emplace_back(1, 2);     // vec = {{1,2}, {1,2}}  => Notice, we didnt needed the {}in emplace one since
                                                        //  it assumes that it is a pair.


    vector<int> vec1(5);       //Declaration: creates a vector of size 5, vec1 = { __, __ , __ , __ , __}

    vector<int> v1(5, 20);  //Declaration: creates a vector of size 5 & each element initialised with value 20
                            //                                                   v1 = {20, 20, 20, 20, 20} 
    vector<int> v2(v1);     // Copy of v1 = v2

//===========================================================================================================
//                                      Vector Element accesing and Iterators
    vector<int> v = {12,43,55,63};
    cout<<v[3];     // Prints out=> 63

    vector<int>::iterator it = v.begin();   //Points at loaction of: v = {*12*,43,55,63}

    it++;
    cout << *(it) << "";        // it = location of(12)  |  *it = 12  (value)

    it = it + 2;    // it now points at locationof 55
    cout << *(it) << " ";       // Output = 55

    //Common Iterators: 
    vector<int>::iterator it1 = v.end();                //Points at loaction of: v = {12,43,55,63} *  *
    vector<int>::reverse_iterator it2 = v.rend();       //Points at loaction of: v = * *{12,43,55,63}
    vector<int>::reverse_iterator it3 = v.rbegin();     //Points at loaction of: v = {12,43,55,*63*}

    cout << v[0] << "" << v.at(0);

    cout << v.back() << " ";        //Points at VALUE of: v = {12,43,55, *63*} i.e. = 63

//===========================================================================================================
//                                      Vector Element accesing and Iterators

    for (vector<int> :: iterator it = v.begin(); it != v.end(); it++) {
    cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++) {      // use auto instead of writing entire iterator keyword
    cout <<* (it) << "";
    }

    for (auto it : v) {     // for each loop
    cout << it << "";
    }



//===========================================================================================================
//                                      Vector Element accesing and Iterators

    // {10, 20, 12, 23}
    v.erase(v.begin() + 1);     //erases specific element and reshuffles. v = {10, 12, 23}

    // {10, 20, 12, 23, 35}
    v.erase(v.begin() + 2, v.begin() + 4); ////{10,20, 35} => erases range of elements (start, end)

    // Insert function

    vector<int> v(2, 100);          // {100, 100}
    v.insert(v.begin(), 300);       // {300,100,100}
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}  => ( _location_ , _noOfInsertions_ , _valueOfInsertion_)

    vector<int> copy(2, 50);                       // {50,50}
    v.insert(v.begin(), copy.begin(), copy.end()); //{50,50,300,10,10,100,100}

    // {10,20}
    cout << v.size(); // 2

    //{10,20}
    v.pop_back(); // {10}

}


int main(){

    return 0;
}