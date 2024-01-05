//AC++ is strongly typed language
//Auto its jobs is to automaticalyy f=define the things and get the tgings done here
 #include<iostream>
 #include<string>
 using namespace std;
 string api_call (){
    return "Got some fast data";

 }
 int main(){
    auto response= api_call();
    cout<<"API CALL VALUE: "<<response;
 }

