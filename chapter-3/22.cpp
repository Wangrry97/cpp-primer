/*
 * @Author: wrry
 * @email: wangrry@hotmail.com
 * @Date: 2023-03-13 21:41:18
 * @LastEditors: wrry wangrry@hotmail.com
 * @LastEditTime: 2023-03-14 09:57:54
 * @FilePath: /cpp-primer/chapter-3/22.cpp
 * @Description:
 * 假设用一个名为text的字符串向量存放文本文件中的数据，其中的元素
 * 或者是一句话或者是一个或者是一个用于表示段落的空字符串，将text
 * 的第一段改为大写，并输出
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> text;
    string s;
    while (getline(cin, s))
        text.push_back(s);

    for (auto it = text.begin();
         it != text.end() && !it->empty(); it++)
    {
        for (auto it2 = it->begin(); it2 != it->end(); it2++)
            *it2 = toupper(*it2);
        cout << *it << endl;
    }

    return 0;
}