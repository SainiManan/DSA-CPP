//In C++, an array is a fixed-size data structure that stores multiple elements of the same data type in contiguous (adjacent) memory locations. Instead of declaring separate variables for each value, you can group them under a single name and access individual items using a zero-based index


#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to make and print an arrat in c++"<<endl;

    int arr[67];

    //For the size of array we can do this as follows
    int sz = sizeof(arr)/sizeof(int);
    cout<<sz<<endl;;    //See its 67
    
    //Now to input the values from an array and print them

    int n;
    cout<<"Enter the size of the array here : ";
    cin>>n;

    for (int i = 0; i < n; i++)   //For input
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++)  //For output
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
