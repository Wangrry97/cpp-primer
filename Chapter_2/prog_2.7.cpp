/*
 * @FilePath: prog_2.7.cpp
 * @Author: Wang Renruoyu
 * @Date: 2023-02-22 15:47:35
 * @LastEditTime: 2023-02-22 16:10:07
 * @Descripttion:
 */
#include <iostream>
using namespace std;

int main()
{
    cout << "Who goes with F\145rgus?\012" << endl; // who goes with fergus? 换行   e  ASCII对照  八进制：145 十六进制：65 十进制：101
    cout << 3.14e1L << endl;                        // long double
    cout << 1024.f << endl;                         // float
    cout << 3.14L << endl;                          // long double
    cout << "\145" << endl;
    cout << "\x65" << endl;
    system("pause");
    return 0;
}