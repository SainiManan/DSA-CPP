//QUESTION - Reverse an array

#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to reverse and array and display it "<<endl;

    int n;
    cout<<"Enter the size of the array here : ";
    cin>>n;

    int arr[67];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }

    int temp;

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp;
        temp = arr[n-i-1];
        arr[n-i-1] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];        
    }
    
    

    return 0;
}