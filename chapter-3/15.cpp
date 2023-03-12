/*
 * @Author: wrry
 * @email: wangrry@hotmail.com
 * @Date: 2023-03-12 17:56:09
 * @LastEditors: wrry wangrry@hotmail.com
 * @LastEditTime: 2023-03-12 17:57:10
 * @FilePath: /cpp-primer/chapter-3/15.cpp
 * @Description:
 */
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string word;
    vector<string> vString;
    char cont = 'y';
    while (cin >> word)
    {
        vString.push_back(word);
        cout << "您要继续输入吗（y or n）？" << endl;
        cin >> cont;
        if (cont != 'y' && cont != 'Y')
        {
            break;
        }
    }
    for (auto i : vString)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}