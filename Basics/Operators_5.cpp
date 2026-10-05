#include<iostream>

using namespace std;
int glo = 7 ;

int main(){
    float num1,num2;
    cout<<"The value of first number is : ",num1;
    cin>>num1;
    cout<<"The value of second number is : ",num2;
    cin>>num2;
    cout<<"This is a program to explain operators in c++:"<<endl;

//Arithmetic operators

    cout<<"This explains arithmetic operators: "<<endl;
    cout<<"The value of a+b is: "<<num1+num2<<endl;
    cout<<"The value of a-b is: "<<num1-num2<<endl;
    cout<<"The value of a*b is: "<<num1*num2<<endl;
    cout<<"The value of a/b is: "<<float(num1/num2)<<endl;  //Here division will only show integer value not decimal
    cout<<"The value of a++ is: "<<num1++<<endl;
    cout<<"The value of a-- is: "<<num1--<<endl;
    cout<<"The value of ++a is: "<<++num1<<endl;
    cout<<"The value of --a is: "<<--num1<<endl;
    

/*Assignment operators -- operator that assign value to a variable
 int a=2,b=2;
 char = "d"*/


//Comparision operators - used to compare values and give output 0 for false and 1 for true

    cout<<"This explains comparision operators: "<<endl;
    cout<<"The value of a==b: "<<(num1==num2)<<endl;
    cout<<"The value of a>=b: "<<(num1>=num2)<<endl;
    cout<<"The value of a<=b: "<<(num1<=num2)<<endl;
    cout<<"The value of a>b: "<<(num1>num2)<<endl;
    cout<<"The value of a<b: "<<(num1<num2)<<endl;
    cout<<"The value of a!=b: "<<(num1!=num2)<<endl;   // != stands for not equal to


//Logical operators(sibling of comparision operators) -- either one condition or both condition are true or false

    cout<<"This explains logical operators: "<<endl;
    cout<<"The value of logical operator of a==b and a>=b: "<<((num1==num2) && (num1>=num2))<<endl;  //both of them should be true
    cout<<"The value of logical operator a==b or a>=b: "<<((num1==num2) || (num1>=num2))<<endl;   //either of them should be true
    cout<<"The value of logical operator not !a==b : "<<!(num1==num2)<<endl;  //it will reverse the output


    int glo = 67 ;
    cout<<"The value of glo is "<<glo<<endl; //Here you can see that it is giving precedence to local variable but....
    cout<<"The value of glo is "<<::glo<<endl; //By using the scope resolution operator we can give precedence to the global variable
    return 0;
}