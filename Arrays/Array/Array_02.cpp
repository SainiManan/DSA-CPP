//Question - Find the smallest number in an array


#include<iostream>
#include<climits>
using namespace std;

int main(){
    cout<<"This is a program to find out the smallest number in an array"<<endl;

    int arr[67];

    int n;
    cout<<"Enter the size of array here : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int smallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]<smallest)
        {
            smallest = arr[i];
        }
        
    }

    cout<<smallest;
    
    return 0;
}