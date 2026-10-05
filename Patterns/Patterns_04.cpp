//TRIANGLE PATTERN
//Easy with stars

#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to print a half basic pyramid pattern "<<endl;

    int n;
    cout<<"Enter the number of rows here : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}