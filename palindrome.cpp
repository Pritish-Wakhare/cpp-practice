/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int num,temp,digit,reverse=0;
    
    cout<<"enter num"<<endl;
    cin>>num;
    int temp = num;
    
    do{
        digit=num%;
         reverse = (reverse * 10) + digit;
            num = num / 10;
       }
        while (num != 0);
    cout<< “The reverse of “<< temp <<” is “<< reverse << endl;
    if (temp == reverse)
            cout<< “The number is a palindrome.”;
        else
            cout<< “The number is not a palindrome.”;
        return 0;
    
}
