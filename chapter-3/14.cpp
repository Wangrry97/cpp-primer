/*
 * @Author: wrry
 * @email: wangrry@hotmail.com
 * @Date: 2023-03-12 17:43:13
 * @LastEditors: wrry wangrry@hotmail.com
 * @LastEditTime: 2023-03-12 17:54:39
 * @FilePath: /cpp-primer/chapter-3/14.cpp
 * @Description:
 */
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int number;
    vector<int> array;
    char cont = 'y';
    while (cin >> number)
    {
        array.push_back(number);
        cout << "您要继续输入吗（y or n）？" << endl;
        cin >> cont;
        if (cont != 'y' && cont != 'Y')
        {
            break;
        }
    }
    for (auto i : array)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}