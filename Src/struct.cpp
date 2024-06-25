// STRUCT A structure creates a data type that can be used to group items of possibly different types into a single type.
//In C++, a structure is the same as a class except that its members are public by default.
/*To define a structure, youmust use the struct statement. The struct statement defines a new data type, withmore
thanone member, for your prog ram. The format of the struct statementis this*/
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
//BOOK detail programm to under stand the struct
#include<iostream>
using namespace std;
struct books {
const char *title;
const char *author;
const char *subject;
const int id;
};
int main(){
   books Books1={"Learn C++ Programming","Chand Miyan","C++ Programming",695700};
   books Books2={"Telecom Billing","Yakit Singha","Telecom",695700};
      cout<<"Book 1 title : "<<Books1.title<<endl;
      cout<<"Book 1 author : "<<Books1.author<<endl;
         cout<<"Book 1 sunbject : "<<Books1.subject<<endl;
            cout<<"Book 1 id : "<<Books1.id<<endl;

              cout<<"Book 2 title : "<<Books2.title<<endl;
      cout<<"Book 2 author : "<<Books2.author<<endl;
         cout<<"Book 2 sunbject : "<<Books2.subject<<endl;
            cout<<"Book 2 id : "<<Books2.id<<endl;
  
};
