/*
-> Namespace: provides a solution for preventing name conflicts
              in large projects. Each entity needs a unique name.
              A namespace allows for identically named entities
              as long as the namespaces are different.
-> To preserve efforts: 
            We may use:     using namespace std; --> in first line of int main
            or even better: using names std::cout or std::cin 
*/

#include <iostream>

namespace name1{
    int a = 1;   
}

namespace name2{
    int a = 2;   
}

int main(){

    int a = 3 ;
    
    std::cout<<"a = "<<a; // => 3 | Shows the local value if not mentioned which namespace
    std::cout<<"\na = "<<name1::a; // => 1

    // This will be EXPECTED BUT NOT TRUE: 
    using namespace name2; // Will not always consider mentioned namespace as deafult from now on
    std::cout<<"\na = "<<a; //  => 2

    return 0;
}
