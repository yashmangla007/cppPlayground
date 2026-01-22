//Capacity and Size of Vectors testing
/*
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v(7) ;
    cout<<"Size of the vector is: "<<v.size()<<endl;
    cout<<"Capacity of the vector is: "<<v.capacity()<<endl;
    v.resize(3);
    cout<<"New Size of the vector is: "<<v.size()<<endl;
    v.resize(3);
    cout<<"New Capacity of the vector is: "<<v.capacity()<<endl;

    v.resize(12);
    cout<<"Now we have changed vector size"<<endl;

    cout<<"New Size of the vector is: "<<v.size()<<endl;
    v.resize(3);
    cout<<"New Capacity of the vector is: "<<v.capacity()<<endl;


    return 0;
}
*/

/*
// Loops in Vectors
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec;

    for(int i=0; i<6; i++){
        cin
    }

    return 0;
}*/

//                              -------------Problems in Vectors-------------


//P1=> Find the last occurence of the element X in a given array
/*
#include<iostream>
#include<vector>
using namespace std;

int main(){

    int index=-1;
    vector<int> v(9) ;
    
    cout<<"Enter your array:"<<endl;
    for(int i=0; i<9; i++){
        cin>>v[i];
    }

    int x;
    cout<<"Enter the X: ";
    cin>>x;

    for(int i=0; i<9; i++){     //Better way: to make our vector travel from last
        if(x==v[i]);            //and stop at the first time x is found 
        index =i;
    }

    if(index>=0) cout<<endl<<"X occurs last at: "<<index;

    if(index<0) cout<<endl<<"X doesnt exhist in array";

    return 0;
}
*/


// P2: Count the number of occurrences of a particular element x.
/*
#include<iostream>
#include<vector>
using namespace std;

int main(){

    int count = 0, x; 
    vector<int>vec(9);
    cout<<"Enter your array:"<<endl;
    for(int i=0; i<9; i++){
        cin>>vec[i];
    }

    cout<<"Enter the X: ";
    cin>>x;

    for(int i=0; i<9; i++){
        if(vec[i]==x) count++;
    }

    cout<<"Number of times "<<x<<" appears is = "<<count;

    return 0;
}*/

//P3: Count the number of elements strictly greater than value x.
#include<iostream>
#include<vector>
using namespace std;

int main(){

    int count = 0, x; 
    vector<int>vec(9);
    cout<<"Enter your array:"<<endl;
    for(int i=0; i<9; i++){
        cin>>vec[i];
    }

    cout<<"Enter the x: ";
    cin>>x;

    for(int i=0; i<9; i++){
        if(vec[i]>x) count++;
    }

    cout<<"Number of times "<<x<<" appears is = "<<count;

    return 0;
}












 
