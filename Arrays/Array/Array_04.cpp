//QUESTION - Print the index at which the smallest value is stored in an array

#include<iostream>
#include<climits>
using namespace std;

int main(){
    cout<<"This is a program to print the index value of the largest and smallest value in an array"<<endl;

    int n;
    cout<<"Enter the size of the array here : ";
    cin>>n;

    int rem;
    int smallest = INT_MAX;
    
    int arr[67];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i]<smallest)
        {
            smallest = arr[i];
        }
        
    }

    cout<<"Smallest number in the array : "<<smallest<<endl;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == smallest)
        {
            cout<<"The index of the smallest number in the array is "<<i<<endl;
            break;
        }
        
    }
    
    
    return 0;
}