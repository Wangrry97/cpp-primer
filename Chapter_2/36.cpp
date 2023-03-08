#include <iostream>
using namespace std;

int main()
{
    int a = 3, b = 4;    // a：整形，结束时值为3；b：整形，结束时值为4
    decltype(a) c = a;   // c：整形，值为3
    decltype((b)) d = a; // d：a的引用，值为a的值3
    ++c;
    ++d;
    // 结束时各个变量的值为：
    // a：4
    // b：4
    // c：4
    // d：4
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    return 0;
}