// STRUCT A structure creates a data type that can be used to group items of possibly different types into a single type.
//In C++, a structure is the same as a class except that its members are public by default.
#include<iostream>
using namespace std;
struct user {
 const int id;
 const char *name;
 const int age;
};
 int main (){
    user kaushik ={001,"Kaushik",14};
    cout<<kaushik.id<<endl;
    user puru = {002,"Puru",15};
    cout<<puru.age<<endl;
    
 }