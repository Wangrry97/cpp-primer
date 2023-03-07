/*
 * @FilePath: 20.cpp
 * @Author: Wang Renruoyu
 * @Date: 2023-03-01 17:46:00
 * @LastEditTime: 2023-03-01 17:53:44
 * @Descripttion: 
 */
#include <iostream>
using namespace std;

int main()
{
    // 请叙述下面这段代码的作用
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;
    // 第一行声明并定义了一个整形变量i的值为42
    // 第二行声明并定义了一个整形指针指向i的地址
    // 第三行为i赋值
    cout << i << endl;
    return 0;
}