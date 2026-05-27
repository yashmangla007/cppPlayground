/*THEORY:
->Typedef: reserved keyword used to create an additional name
           (alias) for another data type.
           New identifier for an existing type
           Helps with readability and reduces typos
           Use when there is a clear benefit
           Replaced with 'using' (work better w/ templates)
-> Typedef syntax:      typedef _orginalDataType_  _replacedName_ ;

-> Using Keyword: works same as typedef, just better in case of templates.
-> using keyword syntax:    using _newName_ = _ogDataType ;
*/

#include<iostream>
typedef std::string text_t; // Convetion to end new typedef'ed names with _t
// using text = std::string;

int main(){

    text_t t1 = "Yash";
    std::cout<<t1<<'\n';

    return 0;
}