    #include<iostream>                          //   iostream = header files
    using namespace std;                        // std karke namespace hai jisko hamne code mein 
                                                //use karna ha 
    int main(){                     // *Standard Function format*:  returntype function_name (-parameters-) {}
        cout<<"Hello World";                // c-out : to print something in C++  |  >> : extraction operator
        cout<<"Hello"<<endl<<"World";       // ednl: used as \n (end line)
        string name = "Yash";
        int a = 5;
        cout<<endl<<name;
        cout<<endl<<"Enter number of apples: ";
        cin>>a;
        cout<<"Your Answer: "<<a;
        return 0;               //Tells compiler that code ended.
    }


/*
Conventions in Naming Variables:5
1. Lowercase : teacontainer
2. Uppercase: TEACONTAINER
3. Camel case: teaContainer
*/

/*
Identifiers: Must start with $ or _
*/

// Wide Data Type: mostly of 2 bytes, used to store bigger characters