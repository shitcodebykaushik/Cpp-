//Functionreturn type function name (){ statement }
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
