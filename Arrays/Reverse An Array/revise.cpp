#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to reverse an array "<<endl;

    int n;
    int arr[67];

    cout<<"Enter the number of elements in the array here: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element "<<i+1<<" here : ";
        cin>>arr[i];
    }

    for (int i = 0; i < n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    cout<<"Reversed array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
       
    return 0;
}