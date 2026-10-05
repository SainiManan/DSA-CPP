//SQUARE PATTERNS
//Easy with alphabets

#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to print square pattern with alphabets"<<endl;

    int n;
    cout<<"Enter the number of rows here : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout<<ch<<" ";
            ch = ch + 1;
        }
        cout<<endl;
    }
    
    return 0;
}