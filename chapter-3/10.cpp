/*
 * @Author: wrry
 * @email: wangrry@hotmail.com
 * @Date: 2023-03-12 00:14:00
 * @LastEditors: wrry wangrry@hotmail.com
 * @LastEditTime: 2023-03-12 03:40:09
 * @FilePath: /cpp-primer/chapter-3/10.cpp
 * @Description:
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "请输入字符串，可以包含空格：" << endl;
    getline(cin, s);
    for (auto &&i : s)
    {
        if (!ispunct(i))
        {
            cout << i;
        }
    }
    cout << endl;

    return 0;
}