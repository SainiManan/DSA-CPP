//Linear search (also known as sequential search) is the simplest algorithm used to find a target value within an array

#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to perform linear search in a given array"<<endl;

    int arr[67];

    int n;
    cout<<"Enter the size of the array here : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the value you want to find here : ";
    cin>>x;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout<<"The value is present at index "<<i<<" in the array "<<endl;
        }
    }
    
    return 0;
}