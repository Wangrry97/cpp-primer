#include <iostream>
using namespace std;
int main()
{
    const int i = 42;           // 整形常量
    auto j = i;                 // 整形
    const auto &k = i;          // 整形常量
    auto *p = &i;               // 整形指针，指向整形常量i的地址
    const auto j2 = i, &k2 = i; // j2为整形常量，k2为整形常量

    cout << i << endl;
    cout << j << endl;
    cout << k << endl;
    cout << p << endl;
    cout << j2 << endl;
    cout << k2 << endl;
    return 0;
}