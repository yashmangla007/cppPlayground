/*
#include<iostream>
using namespace std;

int main(){

    cout<<"Hello"; // O(1)  

    return 0;
}*/


//P2: TC for transvesing an Array
/*
#include<iostream>
using namespace std;

int main(){
     
    int arr[] = {1,3,52,4,22,55,21}; 

    for(int i=0; i<7; i++){
        cout<<arr[i]<<"\n";
    }

    return 0 ;          // O(n)
}*/


//--------------------------------~Time Complexity Example---------------------------------------

//E1: 

#include<iostream>
using namespace std;

int main(){

    int n; 
    int value = 0;
    for(int i=1; i<=n; i*=2){
        value++;
    }

    return 0;
}