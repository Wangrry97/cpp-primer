/*
 * @FilePath: prog_2.6.cpp
 * @Author: Wang Renruoyu
 * @Date: 2023-02-22 15:38:04
 * @LastEditTime: 2023-02-22 15:44:59
 * @Descripttion:
 */
#include <iostream>
using namespace std;

int main()
{
    int month = 9, day = 7;
    cout << typeid(month).name() << endl; // int
    cout << typeid(day).name() << endl;   // int

    month = 09, day = 07;
    cout << typeid(month).name() << endl; // 无法输出，超过八进制数的最大值
    cout << typeid(day).name() << endl;   // int

    system("pause");
    return 0;
}