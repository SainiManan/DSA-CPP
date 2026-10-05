#include<iostream>
using namespace std;

int main(){
    cout<<"This program is to explain the do while loops"<<endl;

int i=1,num1;
    cout<<"ENTER YOUR NUMBER: ";
    cin>>num1;
    do{
        cout<<num1<<" x "<<i<<" = "<<i*num1<<endl;
        i++;
    }while (i <= 10);
    return 0;
}