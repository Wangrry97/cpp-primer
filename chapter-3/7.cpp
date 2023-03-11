/*
 * @Author: wrry
 * @email: wangrry@hotmail.com
 * @Date: 2023-03-11 23:57:07
 * @LastEditors: wrry wangrry@hotmail.com
 * @LastEditTime: 2023-03-11 23:57:22
 * @FilePath: /cpp-primer/chapter-3/7.cpp
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
    for (char &s : str)
    {
        s = 'X';
    }
    cout << str << endl;

    return 0;
}