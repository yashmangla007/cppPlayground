/*// fill()
-> Useful when multiple indexes of an array are to be filled with the same values.
-> std::fill( begin, end, value) ==> This needs pointer/identifier values and not the element. 
                                    END Iterator is excluded!!
    or include header: <algorithm> and then write fill()
*/

#include<iostream>

int main(){

    int ar1[5];

    //Just testing the array locations and pointers and values
    // std::cout<<"ar1[0]= "<<ar1[0]<<'\n';
    // std::cout<<"ar1+1= "<<*(ar1+1)<<'\n';
    // std::cout<<"ar1[0]= "<<ar1[0]<<'\n';
    // std::cout<<"ar1[0]= "<<ar1[0]<<'\n';
    // std::cout<<"ar1[0]= "<<ar1[0]<<'\n';

    std::fill(ar1+2, ar1+5, 2);
    // std::fill(ar1[0], ar1[4], 1);    // This is not right!!!
    std::fill(&ar1[0], &ar1[2], 1);

    for (int i = 0; i < 5; i++)
    {
        std::cout<<ar1[i]<<"\t";
    }
    

    return 0;
}
