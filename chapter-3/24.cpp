/*
 * @Author: wrry
 * @email: wangrry@hotmail.com
 * @Date: 2023-03-14 13:02:33
 * @LastEditors: wrry wangrry@hotmail.com
 * @LastEditTime: 2023-03-14 14:08:26
 * @FilePath: /cpp-primer/.vscode/24.cpp
 * @Description:
 */
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vInt;
    int i;
    while (cin >> i)
    {
        vInt.push_back(i);
    }
    auto beg = vInt.begin(), end = vInt.end();
    auto mid = vInt.begin() + (end - beg) / 2;

    // 输出每对相邻整数的和
    for (auto it = beg; it < (end - 1); it = it + 2)
    {
        cout << *it + *(it + 1) << ' ';
    }
    if (vInt.size() % 2 != 0)
    {
        cout << vInt[vInt.size() - 1] * 2 << endl;
    }

    // 输出第1和最后1个、第2和倒数第2元素的和
    for (auto it = beg; it < mid; it++, end--)
    {
        cout << *it + *(end - 1) << ' ';
    }
    if (vInt.size() % 2 != 0)
    {
        cout << *mid * 2 << endl;
    }

    return 0;
}