#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    auto &g = ci;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;
    cout << "f = " << f << endl;

    a = 42; // 正确  a是i的别名，此操作相当于 i = 42
    b = 42; // 正确  b是一个整形常量，这里的操作相当于给b赋值42
    c = 42; // 正确  c是一个整形常量，同b
    // d = 42; // 错误  d是一个整形指针，指向i
    // e = 42; // 错误  e是一个整形指针，指向整形常量ci
    // g = 42; // 错误  g是整形常量ci的别名，无法更改其值

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;
    cout << "f = " << f << endl;

    return 0;
}