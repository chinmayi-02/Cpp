#include <iostream>
using namespace std;

int main() {
    int age;
    cout<< "Enter your age"<<endl;
    cin>>age;

    switch (age) {
        case 12:
        cout<< "You are 12 years old";
        break;

        case 8:
        cout<< "You are 8 years old";
        break;

        default:
        cout<< "You are neither 12 nor 8 years old";
        
    }

    return 0;
}