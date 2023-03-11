/*
 * @Author: wrry
 * @email: wangrry@hotmail.com
 * @Date: 2023-03-11 19:49:02
 * @LastEditors: wrry wangrry@hotmail.com
 * @LastEditTime: 2023-03-11 19:58:46
 * @FilePath: /cpp-primer/chapter-3/4.cpp
 * @Description:
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    string s1, s2;
    cout << "请输入两个字符串：" << endl;
    cin >> s1 >> s2;
    if (s1 != s2)
    {
        cout << "两个字符串不相等" << endl;
        if (s1 > s2)
        {
            cout << "较大的字符串为：" << s1 << endl;
        }
        else
        {
            cout << "较大的字符串为：" << s2 << endl;
        }
    }
    */

    string s1, s2;
    cout << "请输入两个字符串：" << endl;
    cin >> s1 >> s2;
    if (s1.size() == s2.size())
    {
        cout << "两个字符串等长：" << endl;
    }
    else
    {
        if (s1.size() > s2.size())
        {
            cout << "较长的字符串为：" << s1 << endl;
        }
        else
        {
            cout << "较长的字符串为：" << s2 << endl;
        }
    }

    return 0;
}