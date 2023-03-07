/*
 * @FilePath: 22.cpp
 * @Author: Wang Renruoyu
 * @Date: 2023-03-01 17:56:23
 * @LastEditTime: 2023-03-01 23:48:11
 * @Descripttion:
 */
// 假设p是一个int型指针，请说明下述代码的含义
#include <iostream>
using namespace std;
int main()
{
    int a = 0, *p = &a;
    if (p)
    {
        cout << "p为真" << endl;
    }
    else
    {
        cout << "p为假" << endl;
    }
    if (*p)
    {
        cout << "*p为真" << endl;
    }
    else
    {
        cout << "*p为假" << endl;
    }

    int *pp = nullptr;
    if (pp)
    {
        cout << "pp为真" << endl;
    }
    else
    {
        cout << "pp为假" << endl;
    }
    cout << *pp << endl;
    if (*pp) // 报错，因为空指针指向的内存空间我们不能访问
    {
        cout << "*pp为真" << endl;
    }
    else
    {
        cout << "*pp为假" << endl;
    }

    /*
    运行结果：
    p为真
    *p为假
    */

    // if(p)判读指针p是否为空指针，如果p是一个空指针，那么结果为false，否则为true。
    // if(*p)判断指针p所指的对象的值是否为0，如果对象的值为0，那么结果为false，否则为true。
    return 0;
}