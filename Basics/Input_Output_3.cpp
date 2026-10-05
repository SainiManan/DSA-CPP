# include<iostream>  //This is the input output stream library in c++
using namespace std;  //We use this so we dont have to write std::cout later in the code

int main(){
    int num1,num2;
    cout<<"The value of first number is: \n",num1;
    cin>> num1 ;
    cout<<"The value of second number is: \n",num2;
    cin>> num2;
    cout<<"The Sum of both the numbers will be: "<< num1+num2<<"\n";
    cout<<"The Difference of both the numbers will be: "<< num1-num2<<"\n";
    cout<<"The Product of both the numbers will be: "<< num1*num2<<"\n";
    }


/*By the help of cin and cout and with the help of insertion and extraction operator we can build
a very basic calculator in which currently i dont know how does division work as it does not give float values*/
/*NOTE: With cin we use extraction operator but with cout we use insertion operator*/
//"<<"--- It is the insertion operator
//">>"--- It is the extraction operator