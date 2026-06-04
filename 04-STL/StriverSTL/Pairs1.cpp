/*
==============================================================================================================
                                                    Theory
==============================================================================================================

-----------------------------------------------------PAIRS----------------------------------------------------
CODE:   pair < _Datatype1_ , _Datatype2_ > _pairName_ = { firstElemnet, secondElement }
ACCESING THE ELEMENT: _pairName_._NoOfElement needed:
                    eg: pair < int, pair<int ,int> > nums = {2, {3,4}};     ==> nums.2.1 = 3

-> Making dynamic array of pairs:
    pair <int, int>* _ArrayPointerName_ = new pair<int, int> [_NoOfPairs];

*/
// *************************************************************************************************************

/*======================================== Practice Problem - 1 ================================================
You are given N points on a 2D plane.
Store each point as a pair<int, int>.
After storing all points, print the point whose x-coordinate is maximum.
If multiple points have the same maximum x-coordinate, print the one that appears first in the input.
=============================================== Solution -1 ===============================================*/

#include <iostream>
using namespace std;

int main(){

    int N;
    cout<<"Enter number of points needed to be stored: ";
    cin>>N;

    //Creating a dynamic Array of pairs;

    pair<int, int>* points = new pair<int, int>[N];
    
    for(int i=0; i<N; i++){
        cout<<"Enter Cordinates of Point "<<i+1<<" (x y):";
        cin>>points[i].first;               // here points[i] -> is a pair, not a pointer
        cin>>points[i].second;              // while, points -> is a pointer!!
    }                          
    
    int largex = points[0].first, largexin = 0 ;        // giving initial value for the first point
    for(int i=1; i<N; i++){                             // starting with 2n Point itself, first is pre considered largest.
        if(points[i].first > largex){
            largexin = i;
            largex = points[i].first;
        }
    }

    cout<<"The largest point is: ("<<points[largex].first<<", "<<points[largex].second<<")";

    delete[] points;

    return 0;
}