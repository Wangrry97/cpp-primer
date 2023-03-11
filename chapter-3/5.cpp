/*
 * @Author: wrry
 * @email: wangrry@hotmail.com
 * @Date: 2023-03-11 20:00:10
 * @LastEditors: wrry wangrry@hotmail.com
 * @LastEditTime: 2023-03-11 20:34:36
 * @FilePath: /cpp-primer/chapter-3/5.cpp
 * @Description:
 */
#include <iostream>
#include <string>

using namespace std;

void test3_5_1()
{
    string cont("y");
    string word, result;
    cout << "练习3.5.1" << endl;
    cout << "请输入首个字符串：" << endl;
    while (cin >> word)
    {
        result += word;
        cout << "是否要继续输入字符串（y or n）？" << endl;
        cin >> cont;
        if (cont == "y" || cont == "Y")
        {
            cout << "请继续输入字符串：" << endl;
        }
        else
        {
            break;
        }
    }
    cout << "拼接后的字符串为：" << result << endl;
    cout << "***********************************************" << endl;
}

void test3_5_2()
{
    string cont("y");
    string word, result;
    cout << "练习3.5.2" << endl;
    cout << "请输入首个字符串：" << endl;
    while (cin >> word)
    {
        result += " " + word;
        cout << "是否要继续输入字符串（y or n）？" << endl;
        cin >> cont;
        if (cont == "y" || cont == "Y")
        {
            cout << "请继续输入字符串：" << endl;
        }
        else
        {
            break;
        }
    }
    cout << "拼接后的字符串为：" << result << endl;
}

int main()
{
    test3_5_1();
    test3_5_2();
    return 0;
}