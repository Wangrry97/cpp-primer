/*
 * @Author: Wangrry
 * @Date: 2023-02-16 13:10:01
 * @LastEditors: Wangrry
 * @LastEditTime: 2023-02-16 13:18:32
 * @Version:
 * @Description:
 */
#include <iostream>
using namespace std;

int main()
{
    int value = 0, sum = 0;
    while (cin >> value)
        sum += value; // 一句语句时，大括号可以省略
    cout << sum << endl;
    system("pause");
    return 0;
}