/*
 * @Author: wrry
 * @email: wangrry@hotmail.com
 * @Date: 2023-03-12 18:14:07
 * @LastEditors: wrry wangrry@hotmail.com
 * @LastEditTime: 2023-03-13 21:39:32
 * @FilePath: /cpp-primer/chapter-3/21.cpp
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

    cout << "v1中的元素个数为" << v1.size() << endl;
    if (v1.begin() != v1.end())
    {
        cout << "v1中的元素为：" << endl;
        for (auto i = v1.begin(); i != v1.end() && i < v1.end(); i++)
        {
            cout << *i << ' ';
        }
        cout << endl;
    }
    cout << "v2中的元素个数为" << v2.size() << endl;
    if (v2.begin() != v2.end())
    {
        cout << "v2中的元素为：" << endl;
        for (auto i = v2.begin(); i != v2.end() && i < v2.end(); i++)
        {
            cout << *i << ' ';
        }
        cout << endl;
    }

    cout << "v3中的元素个数为" << v3.size() << endl;
    if (v3.begin() != v3.end())
    {
        cout << "v3中的元素为：" << endl;
        for (auto i = v3.begin(); i != v3.end() && i < v3.end(); i++)
        {
            cout << *i << ' ';
        }
        cout << endl;
    }

    cout << "v4中的元素个数为" << v4.size() << endl;
    if (v4.begin() != v4.end())
    {
        cout << "v4中的元素为：" << endl;
        for (auto i = v4.begin(); i != v4.end() && i < v4.end(); i++)
        {
            cout << *i << ' ';
        }
        cout << endl;
    }

    cout << "v5中的元素个数为" << v5.size() << endl;
    if (v5.begin() != v5.end())
    {
        cout << "v5中的元素为：" << endl;
        for (auto i = v5.begin(); i != v5.end() && i < v5.end(); i++)
        {
            cout << *i << ' ';
        }
        cout << endl;
    }

    cout << "v6中的元素个数为" << v6.size() << endl;
    if (v6.begin() != v6.end())
    {
        cout << "v6中的元素为：" << endl;
        for (auto i = v6.begin(); i != v6.end() && i < v6.end(); i++)
        {
            cout << *i << ' ';
        }
        cout << endl;
    }

    cout << "v7中的元素个数为" << v7.size() << endl;
    if (v7.begin() != v7.end())
    {
        cout << "v7中的元素为：" << endl;
        for (auto i = v7.begin(); i != v7.end() && i < v7.end(); i++)
        {
            cout << *i << ' ';
        }
        cout << endl;
    }

    return 0;
}