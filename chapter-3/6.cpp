/*
 * @Author: wrry
 * @email: wangrry@hotmail.com
 * @Date: 2023-03-11 23:50:00
 * @LastEditors: wrry wangrry@hotmail.com
 * @LastEditTime: 2023-03-11 23:55:48
 * @FilePath: /cpp-primer/chapter-3/6.cpp
 * @Description:
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "请输入字符串：" << endl;
    string str;
    cin >> str;
    for (auto &s : str)
    {
        s = 'X';
    }
    cout << str << endl;

    return 0;
}