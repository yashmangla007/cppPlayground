#include <iostream>

int main(){
/*
    // --------------------------------------Practicing Switch Case:----------------------------------------
    int month;

    std::cout<<"\nEnter your Month: ";
    std::cin>>month;

    switch (month)
    {
    case 1:
        std::cout<<"Its January!";
        break;

    
    case 2:
        std::cout<<"Its February!";
        break;

    
    case 3:
        std::cout<<"Its March!";
        break;

    default:
        std::cout<<"Its not Jan Feb or March!";
        break;
    }
*/
    //----------------------------------------Ternary Operator------------------------------------------

    int div3;
    std::cout<<"\nEnter the number: ";
    std::cin>>div3;

    div3 % 3 == 0 ? std::cout<<"Number is divisible by 3" : std::cout<<"Number is not divisible by 3";


    return 0;
}