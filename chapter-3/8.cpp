/*
 * @Author: wrry
 * @email: wangrry@hotmail.com
 * @Date: 2023-03-11 23:58:02
 * @LastEditors: wrry wangrry@hotmail.com
 * @LastEditTime: 2023-03-12 00:09:09
 * @FilePath: /cpp-primer/chapter-3/8.cpp
 * @Description:
 */
#include <iostream>
#include <string>

using namespace std;

void test3_8_1()
{
    string str;
    cout << "请输入字符串：" << endl;
    cin >> str;
    decltype(str.size()) i = 0, n = str.size();
    while (i < n)
    {
        str[i] = 'X';
        i++;
    }
    cout << str << endl;
}
void test3_8_2()
{
    string str;
    cout << "请输入字符串：" << endl;
    cin >> str;
    for (decltype(str.size()) i = 0; i < str.size(); i++)
    {
        str[i] = 'X';
    }
    cout << str << endl;
}
int main()
{
    test3_8_1();
    test3_8_2();
    return 0;
}