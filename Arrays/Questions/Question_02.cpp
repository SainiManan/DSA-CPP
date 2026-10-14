// QUESTION 2
//WAF to swap the max and min value in an array

#include<iostream>
#include<climits>
using namespace std;

int swap(int arr[],int a){
    int largest = INT_MIN;
    for (int i = 0; i < a; i++)
    {
        if (arr[i]>largest){
            largest = arr[i];
        }
    }

    int smallest = INT_MAX;
    for (int i = 0; i < a; i++)
    {
        if (arr[i]<smallest){
            smallest = arr[i];
        }
    }

    int temp = largest;
    largest = smallest;
    smallest = temp;
    
    cout<<"Max value after swapping = "<<largest<<endl;
    cout<<"Min value after swapping = "<<smallest<<endl;
    
}

int main(){
    cout<<"This is a program to swap the max and min number of the array "<<endl;

    int n;
    int arr[67];

    cout<<"Enter the size of array here : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    swap(arr,n);

    return 0;
}