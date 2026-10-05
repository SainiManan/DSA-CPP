//QUESTION - 3
//Calculate sum of digits of a number using functions

int sum_of_digits(int num){
    int sum = 0;
    int rem;

    while (num > 0)
    {
        rem = num%10;
        num = num/10;
        sum = sum + rem;
    }
    
    return sum;
    
}

#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to print the sum of digits of a number using functions "<<endl;

    int n;
    cout<<"Enter your number here : ";
    cin>>n;

    cout<<"The sum of digits of "<<n<<" will be "<<sum_of_digits(n)<<endl;
    return 0;
}