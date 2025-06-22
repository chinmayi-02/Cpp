#include <iostream>
#include <string>
using namespace std;

class Customers {
    public:
        string name;
        int age;

        void display() {
            cout<<"Name of the customer is "<<name<<" and age is "<<age<<endl;
        }


};

int main() {
    Customers c1;
    c1.name = "Chinmayi";
    c1.age = 23;
    c1.display();
    return 0;
}
