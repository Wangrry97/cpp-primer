/*
 * @FilePath: 11.cpp
 * @Author: Wang Renruoyu
 * @Date: 2023-02-28 14:06:31
 * @LastEditTime: 2023-02-28 14:10:32
 * @Descripttion:
 */
#include <iostream>
int main()
{
    extern int ix = 1024; // 定义 definition
    int iy;               // 声明并定义 definition & declaration
    extern int iz;        // 声明 declaration
    return 0;
}