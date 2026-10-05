// QUESTION - 1 
//Calculate the sum of numbers from 1 to n

int sum_till_n(int a){
    int sum = 0;
    for (int i = 0; i <= a; i++)
    {
        sum = sum + i;
    }
    
    return sum;
}


#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to print the sum of numbers till n"<<endl;

    int n;
    cout<<"Enter the nth term here : ";
    cin>>n;

    cout<<"The sum till "<<n<<"th term (including the nth term) is "<<sum_till_n(n)<<endl;
    return 0;
}