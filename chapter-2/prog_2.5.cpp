/*
 * @FilePath: prog_2.5.cpp
 * @Author: Wang Renruoyu
 * @Date: 2023-02-22 10:58:50
 * @LastEditTime: 2023-02-22 15:31:38
 * @Descripttion:
 */
#include <iostream>

using namespace std;

int main()
{
    cout << "(a) -----------------------------" << endl;
    cout << "'a' 的数据类型为：" << typeid('a').name() << endl; // 字符字面值
    cout << "L'a' 的数据类型为：" << typeid(L'a').name() << endl;       // 宽字符字面值 wchar_t
    cout << "\"a\" 的数据类型为：" << typeid("a").name() << endl;       // 字符串字面值
    cout << "L\"a\" 的数据类型为：" << typeid(L"a").name() << endl;     // 宽字符串字面值
    cout << "(b) -----------------------------" << endl;
    cout << "10 的数据类型为：" << typeid(10).name() << endl;   // int
    cout << "10u 的数据类型为：" << typeid(10u).name() << endl; //
    cout << "10L 的数据类型为：" << typeid(10L).name() << endl;
    cout << "10uL 的数据类型为：" << typeid(10uL).name() << endl;
    cout << "10uLL 的数据类型为：" << typeid(10uLL).name() << endl;
    cout << "012 的数据类型为：" << typeid(012).name() << endl;
    cout << "0xC 的数据类型为：" << typeid(0xC).name() << endl;
    cout << "(c) -----------------------------" << endl;
    cout << "3.14 的数据类型为：" << typeid(3.14).name() << endl;
    cout << "3.14f 的数据类型为：" << typeid(3.14f).name() << endl;
    cout << "3.14L 的数据类型为：" << typeid(3.14L).name() << endl;
    cout << "(d) -----------------------------" << endl;
    cout << "10 的数据类型为：" << typeid(10).name() << endl;
    cout << "10u 的数据类型为：" << typeid(10u).name() << endl;
    cout << "10. 的数据类型为：" << typeid(10.).name() << endl;
    cout << "10e-2 的数据类型为：" << typeid(10e-2).name() << endl;

    system("pause");
    return 0;
}
