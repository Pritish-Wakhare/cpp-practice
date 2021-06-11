/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n=100 , s = 0;
    while(n!=0){
        n= n/5;
        s+=n;
    }
    cout<<s;

    return 0;
}
