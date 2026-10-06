//QUESTION - Print the index at which the largest value is stored in an array

#include<iostream>
#include<climits>
using namespace std;

int main(){
    cout<<"This is a program to print the index value of the largest value in an array"<<endl;

    int n;
    cout<<"Enter the size of the array here : ";
    cin>>n;

    int largest = INT_MIN;
    
    int arr [67];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>largest)
        {
            largest = arr[i];
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == largest)
        {
            cout<<"The location of the largest number is "<<i<<endl;
        }
        
    }
    
    cout<<"The largest number is : "<<largest<<endl;

    return 0;
}