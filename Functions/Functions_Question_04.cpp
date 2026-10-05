//QUESTION 4
//Calculate ncr binomial coefficient for n and r

int binomial_combination(int n, int r){
    int n_factorial = 1;
    int r_factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        n_factorial = n_factorial*i;
    }

    for (int i = 1; i <= r; i++)
    {
        r_factorial = r_factorial*i;
    }
    
    int diff = n-r;
    int diff_factorial = 1;

    for (int i = 1; i <= diff; i++)
    {
        diff_factorial = diff_factorial*i;
    }
    
    int combination = n_factorial/(r_factorial*diff_factorial);


    return combination;
}



#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to calculate ncr(combinations)"<<endl;


    int n,r;
    cout<<"Enter the total number of items in the set here : ";
    cin>>n;
    cout<<"Enter the number of items you want to select here : ";
    cin>>r;

    
    cout<<"ncr() = "<<binomial_combination(n,r)<<endl;
    return 0;
}