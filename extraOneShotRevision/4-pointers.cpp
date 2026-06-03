#include<iostream>

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return;
}

int main(){

    int x = 2, y = 5;

    swap(x,y);

    std::cout<<"x = "<<x;
    std::cout<<"\ny= "<<y;


    return 0;
}