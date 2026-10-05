//TRIANGLE PATTERN
//Easy with alphabets

#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to print triangle pattern with alhabets"<<endl;

    int n;
    cout<<"Enter the number of rows here : ";
    cin>>n;

    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1 ; j++)
        {
            cout<<ch<<" ";
        }
        ch = ch + 1;
        cout<<endl;
    }
    
    return 0;
}