//Qualifier
//Life duration qualifier = It means for how much duration the should be available to it 
//static It is used to keep the track of entire life cycle of variable
//REGISTER It is used to store the information in the reister 
//Extern Any information which you want to store in library which be feteced used linker
//Auto it has been removed
//Modification qualifier = It allows you to modify or not to modify value in any data structure or variable
//Const= It keeps the value constant
// Volatile =It is very common to see for the multithreaded mostly used in server side 
// Mutable It makes things mutable
#include <iostream>
using namespace std;
int age(){
   static int afterage =2;
    return afterage= afterage+1;
}
int main(){
    int afterage=2;
    cout<<"Your cureent age is "<<afterage<<endl;

    afterage=age();
    cout<<"Your  age  next year will be  "<<afterage<<endl;

     afterage=age();
    cout<<"Your  age  next year will be  "<<afterage<<endl;
}