// -----------------------------------------------------PAIRS----------------------------------------------------
// *************************************************************************************************************
/*=============================================== Practice Problem - 2 ================================================
You are given N students.
For each student:
    first value = marks
    second value = roll number
Store the data using pairs.
Print the roll number of the student having the highest marks.
If multiple students have the same highest marks, print the student with the smaller roll number.
=============================================== Solution -1 ===============================================*/

#include <iostream>
using namespace std;

int main(){

    int N;
    cout<<"Enter number of points needed to be stored: ";
    cin>>N;

    //Creating a dynamic Array of pairs;
    pair<int, int>* student = new pair<int, int>[N];

    for (int i = 0; i < N; i++)
    {
        cout<<"Enter data of student No. "<<i+1<<" (Marks RollNo.):";
        cin>>student[i].first;               
        cin>>student[i].second;
    }

    int maxmarks = student[0].first;
    int maxrollno = student[0].second;

    for (int i = 1; i <N; i++)
    {
        if (student[i].first>maxmarks){
            maxrollno = student[i].second;
            maxmarks = student[i].first;
        }
        if (student[i].first==maxmarks && student[i].second<maxrollno)
        {
            maxrollno= student[i].second;
        }
            
    }
    
    cout<<"Roll no: "<<maxrollno<<" has the highest marks.";
    
    delete[] student;

    return 0;
}