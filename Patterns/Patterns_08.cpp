//REVRSE TRIANGLE PATTERN
//With numbers
/*
1
21
321
4321
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to print a revrse triangle pattern with numbers"<<endl;

    int n;
    cout<<"Enter the number of rows here : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j > 0; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}