// ----------------------------------------TEMPERATURE CONVERSION PROGRAM--------------------------------------
#include <iostream>

int main(){
    using std::cout;
    using std::cin;

    char inunit;
    cout<<"\nEnter your input unit (F/C): ";
    cin>>inunit;
    int intemp;
    cout<<"Enter the temperature: ";
    cin>>intemp;

    inunit=='F' ? cout<<'\n'<<intemp<<" F = "<<( intemp - 32) * (5/9)<<" C" : cout<<'\n'<<inunit<<" C = "<<(intemp * (9/5))+32<<" F" ; 
    


    return 0;
}