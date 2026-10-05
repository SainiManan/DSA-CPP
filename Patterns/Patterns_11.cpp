//PYRAMID PATTERN
//with numbers
/*
    1
  1 2 1
1 2 3 2 1
*/


#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to print a pyramid pattern with numbers "<<endl;

    int n;
    cout<<"Enter the number of rows here : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n-i-1; k++)
        {
            cout<<" ";
        }

        for (int j = 1; j < i+1; j++)
        {
            cout<<j;
        }

        for (int l = i+1; l > 0; l--)
        {
            cout<<l;
        }

        cout<<endl;
        
        
        
    }
    
    return 0;
}