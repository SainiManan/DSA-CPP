//INVERTED TRIANGLE PATTERN
//Reverse numbers
/*
1111
 222
  33
   4
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to print inverted triangle pattern with revrese numbers"<<endl;

    int n;
    cout<<"Enter the number of rows here : ";
    cin>>n;

    int num = 1;
    
    for (int i = 0; i < n; i++)
    {

        for (int k = 0; k < i; k++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j < n-i; j++)
        {
            cout<<num;
        }
        num = num + 1;
        cout<<endl;
    }
    
    return 0;
}