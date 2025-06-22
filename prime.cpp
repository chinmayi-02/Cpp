#include <iostream>
using namespace std;


bool isPrime(int num) {
    if (num<=1)
        return false;
    for(int i = 2; i * i<=num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int a;
    cout<<"Enter the number: "<<endl;
    cin>>a;

    if (isPrime(a))
        cout<<a << " is a prime number."<<endl;
    else
        cout<<a << " is not a prime number."<<endl;
    
    return 0;

}