/*
 * @Author: wrry
 * @email: wangrry@hotmail.com
 * @Date: 2023-03-11 19:35:16
 * @LastEditors: wrry wangrry@hotmail.com
 * @LastEditTime: 2023-03-11 19:44:22
 * @FilePath: /cpp-primer/chapter-3/2.cpp
 * @Description:
 */
#include <iostream>
#include <string>
using namespace std;

void get_line()
{
    string line;
    getline(cin, line);
    cout << line << endl;
}

void get_word()
{
    string word;
    while (cin >> word)
    {
        cout << word << endl;
    }
}

int main()
{
    get_line();
    get_word();
    return 0;
}