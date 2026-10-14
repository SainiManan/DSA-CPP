//Reverse an array

#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to reverse an array using two pointer approach"<<endl;

    int n;
    int arr[67];

    cout<<"Enter the number of elements here : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int start = 0;
    int end = n-1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start = start + 1;
        end = end - 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}