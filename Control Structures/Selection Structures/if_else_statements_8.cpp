#include<iostream>

using namespace std;

/*****************************IF-ELSE LADDER*************************/

int main(){
    cout<<"This is a tutorial for sequence structures : "<<endl;
    int age;
    cout<<"PLEASE ENTER YOU AGE : ";
    cin>>age;
    if((age<18) && (age>=1)){
        cout<<"You cannot come to the party IYKYK"<<endl;
    }
    else if(age==18){
        cout<<"You just peeled off your egg and only allowed with a kid pass"<<endl;
    }
    else if(age<1){
        cout<<"Are you serious right now bruuhh"<<endl;
    }
    else{
        cout<<"You can come to the party without your children ofcourse"<<endl;
    }

/*************************SWITCH CASE STATEMENTS**********************/
//This method doesnt easiliy get all the possiblities 

    switch (age)
    {
    case 18:
        /* code */
        cout<<"YOU CAN COME MATE";
        break;
    case 22:
        cout<<"YOU CAN EASILY COME MATE";
    case 2:
        cout<<"YOU CANNOT COME MATE";
    default:
        cout<<"THE SWITCH CASE METHOD OF SEQUENCE STRUCTURE IS BULLSHIT IN MY OPINION";
        break;
    }

    return 0;
}