#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to explain break and continue statements in loops"<<endl;
    for(int i=0; i<=69; i++){
        cout<<i<<endl;
        if(i==67){          //here you can see that the loop breaks at 67
        break;              //Break statements helps in exiting the loop on a specific condition
         }
    }

    for(int i=7; i<=69; i++){

        if(i==67){
            continue;       //here you can see it skipped 67 if we places cout<<i<<endl at the end
        }cout<<i<<endl;     //The continue statements helps us to continue the loop by skipping one or more than one values
    }
    return 0;
}

