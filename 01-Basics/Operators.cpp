//Problem: Print all the values between 1 and 50 except for the multiples of 3.
/*
#include <iostream>
using namespace std;

int main(){

    for(int i=1; i<=50; i++){
        if(i%3==0) continue;
        cout<<i<<" ";
    }

    return 0;
}
*/


// Problem2: Count the number of digits for a given number n
/*
#include<iostream>
using namespace std;

int main(){

    int n, count =0;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i=0; n%10>0; i++){
        count++;
        n = n/10;
    }
    cout<<endl<<"Number of digits = "<<count;

    return 0;
}*/


// Problem 3: Find the Sum of Digits in the given number
/*
#include<iostream>
using namespace std;

int main(){

    int n, sum =0;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i=0; n%10>0; i++){
        sum += n%10;
        n = n/10;
    }
    cout<<endl<<"Sum of digits = "<<sum;

    return 0;
}*/

// Problem 4: Reverse the order of Digits

#include<iostream>
using namespace std;

int main(){

    

    return 0;
}