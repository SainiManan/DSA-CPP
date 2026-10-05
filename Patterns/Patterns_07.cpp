//TRIANGLE PATTERN
//Easy with number #2

#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to print triangle pattern using numbers #2"<<endl;

    int n;
    cout<<"Enter the number of rows here : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < i+2; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}



/*                     ALTERNATIVE - APPROACH
#include<iostream>
using namespace std;

int main(){
    cout<<"This is a program to print triangle pattern using numbers #2"<<endl;

    int n;
    cout<<"Enter the number of rows here : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
    int num = 1;
        for (int j = 0; j < i+1 ; j++)
        {
            cout<<num<<" ";
            num = num + 1;
        }
        cout<<endl;
    }
    
    return 0;
}
*/