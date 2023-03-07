/*
 * @FilePath: prog_2.3.cpp
 * @Author: Wang Renruoyu
 * @Date: 2023-02-21 16:07:22
 * @LastEditTime: 2023-02-21 18:23:09
 * @Descripttion:
 */
#include <iostream>
using namespace std;
void test()
{
    unsigned u = 10, u2 = 42;
    cout << u2 - u << endl; // 正确 32 
    cout << u - u2 << endl; // 错误 4294967264，无符号整形不能出现负数

    int i = 10, i2 = 42;
    cout << i2 - i << endl; // 正确 32
    cout << i - i2 << endl; // 正确 -32
    cout << i - u << endl;  // 正确 0
    cout << u - i << endl;  // 正确 0
}

int main()
{
    test();
    system("pause");
    return 0;
}