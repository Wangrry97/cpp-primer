/*
 * @FilePath: prog_test.cpp
 * @Author: Wang Renruoyu
 * @Date: 2023-02-21 13:54:49
 * @LastEditTime: 2023-02-21 17:30:21
 * @Descripttion:
 */
#include <iostream>
using namespace std;

int main()
{
    unsigned int u = 10;
    int i = -42;
    cout << i + i << endl; // i + i = -42 + (-42) = -84
    cout << u + i << endl; // u + i = 10 + (4294967296 - 42) = 4294967264
    /*
    a % b = a - b * floor(a / b)，其中floor(x)表示不大于x的最大整数，/是数学中的除法，不取整
    所以,数学上的定义保证了 a % b 与 b 同号.本题的计算过程，为:
    -1 % 256 = -1 - 256 * floor(-1 / 256)
    = -1 - 256 * floor(-0.00390625)
    = -1 - 256 * (-1)
    = -1 + 256
    = 255
    */
    unsigned int u1 = 42, u2 = 10;
    cout << u1 - u2 << endl; // 32
    cout << u2 - u1 << endl; // 10 - 42 = -32 = -32 + 4294967296 = 4294967264

    // for (unsigned int u = 10; u >= 0; u--)
    // {
    //     cout << u << endl;
    // }

    // unsigned int u = 10;
    while (u > 0)
    {
        --u;
        cout << u << endl;
    }


    return 0;
}