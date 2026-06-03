/*//Theory:

NULL POINTERS:
// Null value = a special value that means something has no value.
   When a pointer is holding a null value,
   that pointer is not pointing at anything (null poin

// nullptr = keyword represents a null pointer literal

// nullptrs are helpful when determining if an address
// was successfully assigned to a pointer

// When using pointers, be careful that your code isn't
// dereferencing nullptr or pointing to free memory
// this will cause undefined behavior

*/

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

    //Nullpointer:

    int *ptr = nullptr;         //initialising the pointer so that it doesnot point to any arbitary thing
    int num = 69;
    ptr = &num;                 // Now that we have a variable, we are now giving the pointer its address

    if (ptr == nullptr)                 //common to check if pointer assignment is sucessfull or not
    {
        std::cout<<"\nNo address is assigned to ptr";
    }

    else{
        std::cout<<"\nAddress was assigned to the pointer!";
        std::cout<<"\nnum = "<<*ptr;

    }
    


    return 0;
}