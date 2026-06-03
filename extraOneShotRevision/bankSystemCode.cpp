#include<iostream>

double showBalance();
double deposit();
double withdraw();

int main(){

    int choice;
    do
    {
    
        std::cout<<"--------------------";
        std::cout<<"\n1. View your Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit";
        std::cout<<"--------------------";
        std::cout<<"\n Enter your Desire: ";
        std::cin>>choice;
    
        switch (choice)
        {
        case 1: showBalance();
                break;
        
        case 2: deposit();
                break;
        
        case 3: withdraw();
                break;
        default: std::cout<<"Invalid Input";
                break;
        }
    } while (choice!=4);
    
    return 0;
}

double showBalance(){
    std::cout<<"";
}