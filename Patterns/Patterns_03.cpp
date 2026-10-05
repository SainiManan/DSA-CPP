//SQUARE PATTERN
//Consecutive numbers

#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to print consecuitive numbers in a square"<<endl;

    int n;
    cout<<"Enter the number of rows here : ";
    cin>>n;

    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<num<<" ";
            num = num + 1;
        }
        cout<<endl;
    }
    
    return 0;
}   