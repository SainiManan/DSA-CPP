//BINARY TO DECIMAL

#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to convert binary numbers into decimal numbers"<<endl;

    int bin_num;
    cout<<"Enter your binary number here : ";
    cin>>bin_num;

    int rem;
    int dec_num = 0;
    int pow = 1;


    while (bin_num > 0){
        rem = bin_num%10;
        bin_num = bin_num/10;
        dec_num = dec_num + (rem*pow);
        pow = pow*2;
    }

    cout<<"Decimal number = "<<dec_num;
    
    
    return 0;
}