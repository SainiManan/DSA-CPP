#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a = 67;
    cout<<"The value of a is : "<<a<<endl;
    a = 69;
    cout<<"The value of a is : "<<a<<endl;      //Here you can see that the value of the variable a got changed to prevent this we use constants in c++
    
    
/*********************************CONSTANTS*************************/

    const int b = 7;
    cout<<"The value of b is: "<<b<<endl;         //now if we try to change the value of b it will show error
    

/**************************MANIPULATORS****************************/
    int x = 18, y = 16, z = 7;
    cout<<"The value of x is : "<<setw(4)<<x<<endl;
    cout<<"The value of y is : "<<setw(4)<<y<<endl;     //The setw manipulator sets the width of the output
    cout<<"The value of z is : "<<setw(4)<<z<<endl;


/*************************OPERATOR PRECEDENCE********************/
//Think of it like bodmass in programming it shows that which operator will take predence before another one

    int num1,num2,num3;
    cout<<"Enter the value of num1 : "<<endl;
    cin>>num1;
    cout<<"Enter the value of num2 : "<<endl;
    cin>>num2;
    num3 = ((((num1*5)-num2)+67)-18);                       //You can see all the precendence order from the website "cpp reference"
    cout<<"The value of num3 will be : "<<num3;       //They follow associative property in one direction to another

    return 0;            
}