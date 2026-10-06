//DECIMAL TO BINARY

#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to convert decimal numbers to binary numbers "<<endl;

    int num;
    cout<<"Enter your decimal number here : ";
    cin>>num;

    int rem;
    int bin_num = 0;
    int pow = 1;

    while (num > 0)
    {
        rem = num%2;
        num = num/2;
        
        bin_num = bin_num + (rem*pow);
        pow = pow*10;
    }
    
    cout<<"Binary number = "<<bin_num;
    
    return 0;
}