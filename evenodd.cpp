#include <iostream>
using namespace std;


int main() {
    int a;
    cout<<"Enter the number:"<<endl;
    cin>>a;

    if(a % 2 == 0)
        cout<<a<<" is an even number."<<endl;
    else
        cout<<a<<" is an odd number."<<endl;
    
        return 0;
}