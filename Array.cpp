//A sequence of way to store the musltiple values 
#include<iostream>
using namespace std;
int main(){
    int integer_array[4]={1,2,3,4};
    cout<<"The values are "<<integer_array[0]<<endl;
    int head_red[7];
    head_red[0]=4;
    cout<<"The value is "<<head_red[0]<<endl;
    *head_red=5;
      cout<<"The value is "<<head_red[0]<<endl;
   // Revisit here
}