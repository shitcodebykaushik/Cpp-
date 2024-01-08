//Inside the classes these function are called method.
//Main is the the first enetry point .Its automatically called .It is kind of function
// Design a function
           //return type (what i will give back )
          // function name (name of function)
         // () [what you have to give me ]
       //{} [inside this we gotta write the statement 
//  call by value here we pass the copy of variable 
//  call by reference
// The function’s code is stored in only one place in memory,

#include<iostream>
using namespace std;
char name (){
    puts("hello");
}
int main(){
 name();
}
//Seeeing the imporatnce of return type
#include<iostream>
using namespace std;
int name (){
  //  puts("hello");
  return 5;
}
int main(){
 printf("%d \n",name()); //This is the  kind off different approach 
 return 0;
}
