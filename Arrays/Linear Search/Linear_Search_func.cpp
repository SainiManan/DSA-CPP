//We can also create a function for linear search
#include<iostream>
using namespace std;

int linear_search(int arr[],int a,int b){

    for (int i = 0; i < b; i++)
    {
        if (arr[i] == a)
        {
            cout<<"The given number is at index "<<i<<endl;
        }
        
    }
    
}

int main(){
    cout<<"This program is to make a function for linear search"<<endl;

    int arr[67];

    int n;
    cout<<"Enter the size of array here : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }

    cout<<linear_search(arr,8,n)<<endl;
    
    
    return 0;
}