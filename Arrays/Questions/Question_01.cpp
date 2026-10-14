// QUESTION 1
// WAF To calculate the sum and product of all numbers in an array

#include<iostream>
using namespace std;

int sum(int arr[],int a){
    int sum  = 0;
    for (int i = 0; i < a; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int product(int arr[],int a){
    int product = 1;
    for (int i = 0; i < a; i++)
    {
       product = product * arr[i];
    }
    return product;
}

int main(){
    cout<<"This is a program to calculate the sum and product of all the numbers in a array"<<endl;

    int arr[67];
    int n;

    
    cout<<"Enter the number of elements in the array here: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element "<<i+1<<" here : ";
        cin>>arr[i];
    }

    cout<<"Sum = "<<sum(arr,n)<<endl;
    cout<<"Product = "<<product(arr,n)<<endl;
    
    return 0;
}