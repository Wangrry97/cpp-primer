/*
 * @FilePath: prog_1.23&1.24.cpp
 * @Author: Wang Renruoyu
 * @Date: 2023-02-17 17:13:34
 * @LastEditTime: 2023-02-20 14:42:20
 * @Descripttion:
 */
#include "Sales_item.h"
#include <iostream>
using namespace std;

int main()
{
    Sales_item item1, item2;

    cout << "请输入销售记录：" << endl;
    if (cin >> item1)
    {
        int count = 1;
        while (cin >> item2)
        {
            if (item1.isbn() == item2.isbn())
            {
                count++;
            }
            else
            {
                cout << item1.isbn() << "共有 " << count << " 条记录" << endl;
                item1 = item2;
                count = 1;
            }
        }
        cout << item1.isbn() << " 共有 " << count << " 条记录" << endl;
    }
    else
    {
        cout << "输入有误！" << endl;
        return -1;
    }

    system("pause");
    return 0;
}