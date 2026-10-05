#include<iostream>

using namespace std;

int main(){
    cout<<"Tutorial for loops in c++"<<endl;
/*            syntax for 'for loop' 
    for(intialisatin; condition; updation)
    {
    loop body(c++ code)
    }                            */
    int i;
    for (int i = 1; i <= 100; i++)
    {
        /* code */
        cout<<i<<endl;
        
    }
    //Example of infinite for loop
   /* for(int i=1; 37<45; i++)                         //cant comment it back back again you know what will happen then
    {
        cout<<i<<endl;
    }        ***************************/
    return 0;
}