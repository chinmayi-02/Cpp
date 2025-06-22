#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int reversedNum(int num) {
    int rev = 0;
    while(num != 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    return rev;    
}

int main() {
    int a;
    cout<<"Enter the number: "<<endl;
    cin>>a;

    string b;
    cout<<"Enter the string: "<<endl;
    cin>>b;

    int reversenum = reversedNum(a);   
    cout<<"Reversed number is "<<a<<endl;

    reverse(b.begin(), b.end());
    cout<<"Reversed string is "<<b<<endl;

    return 0;
}