/*
 * @Author: wrry
 * @email: wangrry@hotmail.com
 * @Date: 2023-03-12 18:22:58
 * @LastEditors: wrry wangrry@hotmail.com
 * @LastEditTime: 2023-03-12 18:31:57
 * @FilePath: /cpp-primer/chapter-3/17.cpp
 * @Description:
 */
#include <iostream>
#include <vector>
#include <vector>

using namespace std;

int main()
{
    string word;
    vector<string> vString;
    char cont{'y'}, letter;

    cout << "请输入一组词：" << endl;
    while (cin >> word)
    {
        for (auto &&i : word)
        {
            i = toupper(i);
        }

        vString.push_back(word);
        cout << "是否要继续输入（y or n）？" << endl;
        cin >> cont;
        if (cont != 'y' && cont != 'Y')
        {
            break;
        }
    }

    for (auto &&i : vString)
    {
        cout << i << endl;
    }

    return 0;
}