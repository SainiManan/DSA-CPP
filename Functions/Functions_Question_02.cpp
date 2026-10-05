//QUESTION - 2
//Calculate n factorial using function

int num_factorial(int a){
    int factorial = 1;

    for (int i = 1; i < a+1 ; i++)
    {
        factorial = factorial*i;
    }
    
    return factorial;
}


#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to calculate the factorial of a number using functions in C++"<<endl;

    int n;
    cout<<"Enter the number here : ";
    cin>>n;

    cout<<"The factorial of "<<n<<" will be "<<num_factorial(n)<<endl;
    return 0;
}