/*
 * @Author: wrry
 * @email: wangrry@hotmail.com
 * @Date: 2023-03-13 23:16:12
 * @LastEditors: wrry wangrry@hotmail.com
 * @LastEditTime: 2023-03-13 23:24:57
 * @FilePath: /cpp-primer/chapter-3/23.cpp
 * @Description:
 */
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    vector<int> vInt;
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; i++)
    {
        vInt.push_back(rand() % 1000);
    }

    for (auto it = vInt.cbegin(); it < vInt.cend(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;

    for (auto it = vInt.begin(); it < vInt.end(); it++)
    {
        *it *= 2;
    }
    for (auto &&i : vInt)
    {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}