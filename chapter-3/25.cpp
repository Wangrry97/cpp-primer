/*
 * @Author: wrry
 * @email: wangrry@hotmail.com
 * @Date: 2023-03-14 14:10:52
 * @LastEditors: wrry wangrry@hotmail.com
 * @LastEditTime: 2023-03-14 17:31:21
 * @FilePath: /cpp-primer/chapter-3/25.cpp
 * @Description:
 */
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<unsigned> scores(11, 0);
    unsigned grade;
    auto beg = scores.begin();
    while (cin >> grade)
    {
        (*(beg + (grade / 10)))++;
    }
    for (auto &&i : scores)
    {
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}