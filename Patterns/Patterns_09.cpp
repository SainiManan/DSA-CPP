//FLOYD'S TRIANGLE PATTERN 
//with numbers
/*
1
23
456
78910
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to print floyd's triangle pattern with numbers "<<endl;

    int n;
    cout<<"Enter the number of rows here : ";
    cin>>n;

    int num = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            num = num + 1;
            cout<<num<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}