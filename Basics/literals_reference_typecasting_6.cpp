#include<iostream>

using namespace std;

int d = 7;

//*************************BUILT IN DATATYPES*****************************/

int main(){
    int a,b,c,d;
    cout<<"Enter your first number: "<<endl;
    cin>>a;
    cout<<"Enter your second number: "<<endl;
    cin>>b;
    cout<<"Enter your third number: "<<endl;
    cin>>c;
    d = a+b+c;
    cout<<"The sum of all the three numbers is: "<<d<<endl; 
    cout<<"The value of d is: "<<::d<<endl;   //This '::'  is  a scope resolution operator this helps the print the value of the global variable


/*******************************LITERALS (float, long double and double)**********************/

    float e = 3.14F;
    long double f = 3.14L;
    cout<<"The size of 3.14 is : "<<sizeof(3.14)<<endl;       //Here you can see that it is syntax flexible
    cout<<"The size of 3.14f is : "<<sizeof(3.14f)<<endl;       //Here you can see that it is syntax flexible
    cout<<"The size of 3.14F is : "<<sizeof(3.14F)<<endl;       //here by default the value of 3.14 is considered as long double
    cout<<"The size of 3.14l is : "<<sizeof(3.14l)<<endl;       //To make it float we add f or F same we can do for long double 
    cout<<"The size of 3.14L is : "<<sizeof(3.14L)<<endl;       //You can see the first 3.14 is taken as double by c++
    
/*******************************REFERENCE VARIABLES***************************/    
    // A variable can be reffered by various names is called reference varriables
    
    int x = 69;
    cout<<"The value of x is: "<<x<<endl;        //Here you can see x and y give the same value '69' as output              
    int & y = x;
    cout<<"The value of y is: "<<y<<endl;
    
/*******************************TYPECASTING**********************************/
//We can change the type of the variable latter in the program is known as typecasting

    int num1 = 67;
    float num2 = 67.69;

    cout<<"The value of num1: "<<num1<<endl;
    cout<<"The value of num1: "<<float(num1)<<endl;
    cout<<"The value of num2: "<<num2<<endl;
    cout<<"The value of num2: "<<int(num2)<<endl;
    cout<<"The value of num2: "<<(int)num2<<endl;     //It is same as the above case


    cout<<"The sum of num1 and num2 is: "<<num1+num2<<endl;       //Here you can see int and float gets added
    cout<<"The sum of num1 and num2 is: "<<num1+int(num2)<<endl;  //Here the float changed to int and finally gave a int output
    cout<<"The sum of num1 and num2 is: "<<num1+(int)num2<<endl;  //It is same as the above case

    return 0;
}

