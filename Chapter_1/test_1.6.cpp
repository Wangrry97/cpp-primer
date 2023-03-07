/*
 * @Author: Wangrry
 * @Date: 2023-02-14 00:07:57
 * @LastEditors: Wangrry
 * @LastEditTime: 2023-02-14 00:10:00
 * @Version:
 * @Description:
 */
#include <iostream>

int main()
{
    std::cout << "请输入两个数：" << std::endl;
    int x, y;
    std::cin >> x >> y;
    std::cout << "The sum of " << x << std::endl;
    std::cout << "and " << y << std::endl;
    std::cout << "is " << x + y << std::endl;
    return 0;
}