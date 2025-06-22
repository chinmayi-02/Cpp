#include <iostream>
using namespace std;

int main() {
    int a = 544;
    int * ptra;
    ptra = &a;
    cout<<ptra<<endl;
    cout<<* ptra;

    return 0;
}