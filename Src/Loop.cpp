/*Loops
Where the condition is getting.
What condition is geting tested
Chage the value that is getting tested
Automatic change of value tha is getting tested
i++ it means use it then increament it 
++i it means increament it then use it 
1.while loop stands for  execute a target statement as long as a given condition is true.
break and continue these two are keywords which we can use it
*/
#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,2,3,4,5,6,7,8,9};
    int l1=0;
    while (l1<9){
        cout<<"Current number is "<<arr1[l1]<<endl;
        l1++;
    }
}
/*Do while  this is basically used in sesor designing 
 Here first condition is executed then it is tested
 */
#include <iostream>
using namespace std;
int main(){
    int arr2[]={1,2,3,4,5,6,7,8,9};
    int l2=0;
    do {
        cout<<"Cureent number is "<<arr2[l2]<<endl;
        l2++;  
    } while (l2<1);
    {
        cout<<"The current value is "<<endl;
        
    
    }
}
 /*
 A for loop is a repetition control structure that allows you to efficiently write a loop that needs to execute a specific number of times.
intitlization
condition
increament 
in range based for loop we use : instead of ; 

 */
#include<iostream>
using namespace std;
int main(){
int my_number[]={1,2,3,4,5,6,7,8,9};
for (int i=0;i<9;i++){
    cout<<"The value are "<<my_number[i]<<endl;
}
 for(int i:my_number){
    cout<<"Here is your value "<<i<<endl;
 };
};
//Charactere breakdown loop
#include<iostream>
using namespace std;
int main(){
    char my_name[]="Kaushik Raj";
    for(int i=0; my_name[i]!=0;i++){
        cout<<"Charactr list are "<<my_name[i]<<endl;
    }
 return 0;
}
