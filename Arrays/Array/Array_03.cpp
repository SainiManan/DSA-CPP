//QUESTION - Find the largest number in the array

#include<iostream>
#include<climits>
using namespace std;

int main(){
    cout<<"This is a program to find out the largest number in an array"<<endl;

    int arr[67];

    int n;
    cout<<"Enter the size of the array here : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    
    int largest = INT_MIN;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>largest)
        {
            largest = arr[i];
        }
        
    }

    cout<<"The largest number in the given array is : "<<largest<<endl;
    
    return 0;
}