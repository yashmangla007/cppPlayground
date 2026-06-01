#include <iostream>

int main(){

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

    return 0;
}