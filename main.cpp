/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int year;
    
    cout<<"enter year"<<endl;
    cin>>year;
    
    if(((year%4==0) && (year %100 != 0)) || (year%400==0)){
        cout<<year<<"is leap year";
        
    }
   else{
       cout<<"not leap";
   }
    return 0;
}
