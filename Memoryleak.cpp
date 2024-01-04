///Memory leak
#include <iostream>
using namespace std;
int main(){
    int *myp;
    try{
    myp= new int [1000000];
    cout<<"Memory space allocated \n"<<endl;
    
}catch(...){
    cout<<"Failed in allocating the memory \n";

}

delete [] myp;
}