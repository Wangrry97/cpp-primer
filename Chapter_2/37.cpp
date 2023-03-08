#include <iostream>
using namespace std;

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype(a = b) d = a;
    // a = 4
    // b = 4
    // c = 3
    // d = 4
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    return 0;
}