/*
 * @Author: wrry 
 * @email: wangrry@hotmail.com
 * @Date: 2023-03-12 18:14:07
 * @LastEditors: wrry wangrry@hotmail.com
 * @LastEditTime: 2023-03-12 18:21:02
 * @FilePath: /cpp-primer/chapter-3/16.cpp
 * @Description: 
 */
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    cout << "v1中没有元素" << endl;
    for (auto &&i : v1)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "v2中有10个元素，每个元素值为10" << endl;
    for (auto &&i : v2)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "v3中有10个元素，每个元素值为42" << endl;
    for (auto &&i : v3)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "v4中有1个元素，其值为10" << endl;
    for (auto &&i : v4)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "v5中有2个元素，其值分别为10和42" << endl;
    for (auto &&i : v5)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "v6有10个元素，其值均为空" << endl;
    for (auto &&i : v6)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "v7中有10个元素，其值均为\"hi\"" << endl;
    for (auto &&i : v7)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}