//Reverse an array

#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to reverse an array "<<endl;

    int arr[67];
    int n;

    cout<<"Enter the number of elements in the array here : ";
    cin>>n;

    cout<<"Enter the elements in the array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
        
    return 0;
}