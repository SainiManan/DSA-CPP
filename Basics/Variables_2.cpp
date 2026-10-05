# include <iostream>

using namespace std;
int glo = 6;   //This  is a global variable
 void sum(){
    int glo;
    cout<<glo;
}

int main(){
    int glo = 7;  // This is a local variable
    glo = 67;  // The value of local variable got changed not global variable
    int a = 30,b = 40;
    float pi = 3.14;
    char noni ='d',manu ='t';
    cout<<"The value of a is "<<a<<"\nThe value of b is "<<b;
    cout<<"\nThe value of pi is "<<pi;
    cout<<"\nThe value of noni is "<<noni<<"\nThe value  of manu is "<<manu;
    cout<<"\nThe value of glo is "<<glo;
    return 0;
}

//here you can see that we can assign datatype to variables and then print them using cout
//NOTE: agar hum char ke andar to ya teen character ka word dalte hai toh un mai se random koi ek letter ka output milega
//NOTE: Local variable takes precidence over global variable if the name is same
//This program is made with reference to code with harry tutorial 4 of c++


