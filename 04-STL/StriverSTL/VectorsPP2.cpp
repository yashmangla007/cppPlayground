// ----------------------------------------------------- VECTORS ----------------------------------------------------

/*========================================== Problem 2 — Student Record Editor ================================

Store student records using:
    vector<pair<int,int>>

where:
first  = marks
second = roll_number

You are given N students.

Then perform the following operations in order:

Insert a new student at the beginning.
Remove the student at index K.
Print all remaining students in the format:
    marks roll_number   (one student per line.)

=================================================== Solution- 2 ===============================================*/

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int N;
    cout<<"Enter the number of students: ";
    cin>>N;
    
    vector<pair<int, int>> student(N);
    int marks, rollNo;
    for(int i = 0 ; i<N; i++){
        cout<<"Data for Student -"<<i<<" => ";
        cin>>marks>>rollNo;
        student[i] = {marks, rollNo}; 
    }

    cout<<"****************************";
    cout<<"\nEnter the details of new student : ";
    cin>>marks>>rollNo;
    student.insert(student.begin(), {marks, rollNo});

    cout<<"****************************";
    int k;
    cout<<"\nNow choose the index to be removed: ";
    cin>>k;

    student.erase(student.begin()+k);

    cout<<"Here is the final vector:\n";
    for (auto it = student.begin(); it != student.end(); it++) {      // use auto instead of writing entire iterator keyword
    cout <<it->first<<" "<<it->second<<'\n';
    }

    return 0;
}