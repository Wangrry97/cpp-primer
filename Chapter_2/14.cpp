/*
 * @FilePath: 14.cpp
 * @Author: Wang Renruoyu
 * @Date: 2023-02-28 14:35:20
 * @LastEditTime: 2023-02-28 14:37:18
 * @Descripttion: 
 */
#include <iostream>
int main()
{
    int i = 100, sum = 0;
    for (int i = 0; i != 10; i++)
    {
        sum += i;
    }
    std::cout << i << "  " << sum << std::endl;
}