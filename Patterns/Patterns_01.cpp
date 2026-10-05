// SQUARE PATTERN
//Easy with numbers

#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to print sqaure pattern"<<endl;

    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}